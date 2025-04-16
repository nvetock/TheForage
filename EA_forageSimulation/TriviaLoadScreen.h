/*
#ifndef TRIVIALOADSCREEN_H
#define TRIVIALOADSCREEN_H

#include <string>

class LoadingScreen
{
private:
	Trivia trivia;

public:
	// Constructor that creates a trivia object if one doesn't exist already
	LoadingScreen(Trivia trivia);
	
	// Destructor
	~LoadingScreen();
	
	// This method will use the self-generated trivia object to execute the game mode
	// returning a bool to verify player selection
	bool startTrivia();
};


// A start time is passed to the constructor of this object on instantiation. It then adds any subscribers that should
// be notified once the time has ran out. An optional 'restart timer' function is available to extend gameplay, otherwise
// this game would be ended in sync with the game's loading screen.
class LoadTimerPublisher
{
private:
	TimerSubscriberInterface subscribers[];
	int timeRemaining();
	
	int updateTimer(int time);
	void notifySubscribers();
public:
	LoadTimerPublisher(int startTime);
	~LoadTimerPublisher();
	
	void addSubscriber(TimerSubscriberInterface subscriber);
	bool removeSubscriber();
	
	int restartTimer(int timeToAdd);
};

// This class acts as an interface to be implemented by Trivia to allow an observer pattern
// to end the Trivia game when the loading screen has finished it's job.
class TimerSubscriberInterface
{
	TimerSubscriberInterface();
	virtual ~TimerSubscriberInterface();
	virtual void update() {};
};


class Trivia : public TimerSubscriberInterface
{
private:
	QuestionPool questionPool;

	QuestionPool generateQuestionPool(int totalQuestions);

	// To monitor the game state a bool is returned from play, when it returns false the game should terminate.
	bool play(QuestionPool questions);
public:
	Trivia();
	~Trivia();

	// implements subscriber method
	void update() override;

	// Execute will try to play - if a questionPool hasn't been generated yet, it will first generateQuestionPool.
	void Execute();
};


class QuestionPool
{
private:
	int totalQuestions;
	Question questions[];

	bool generateQuestions(int questionAmount);
public:
	QuestionPool(int totalQuestions);
	~QuestionPool();

	Question getQuestion();
};

class Question
{
private:
	std::string question;
	std::string answers[3]; // limit of 3 random answers per question
	
	// For fastest implementation easily identify the correct answer for comparisons later.
	// Future cases could use something more secure like a hidden bitset that holds the key 
	// for which answer in an array is correct
	std::string correctAnswer; 
public:
	Question();
	~Question();

	std::string_view getQuestion();
	std::string_view getAnswer(int index);
	std::string_view getCorrectAnswer();
};

class Play
{
private:
	QuestionPool questionPool;
public:
	Play(QuestionPool qp);
	~Play();


};

// The playblock 'Question' and 'Answer' objects use references 
// to point to the already existing objects in the Question Pool
class PlayBlock
{
private:
	Question question;
	Answer answer[4];
	Answer correctAnswer;
	Score score;
public:
	PlayBlock();
	~PlayBlock();

	Question getQuestion();
	void setQuestion(Question& question);
	
	Answer getAnswer();
	void setAnswer(Answer& answer);
	void setCorrectAnswer(Answer& answer);
	
	Score getScore();
	void setScore(int score);
};

class Answer
{
private:
	// The Question Pool will outlive this object, so a string_view is used to save space.
	std::string_view answer;
public:
	Answer();
	~Answer();

	std::string_view getAnswer();
	void setAnswer();
};

class Score
{
private:
	int score;
	int scoreMultiplier;
public:
	Score();
	~Score();

	int getScore();
	void setScore();

	// increase decrease are separated to allow increase to utilize a score multiplier more easily.
	void increaseScore(int amountToAdd);
	void decreaseScore(int amountToRemove);
};


#endif
*/