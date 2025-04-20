# Background Info
I'll be working through this simulation as if I had started as a new intern in a Technology Analyst Program. The projects I will focus on involve internal systems and products for Citi Bank.
## Software Used Throughout
- Miro
- Visual Studio
## Quick Nav for tasks
- **Task 1:** Citi_ForageSimulation_stateDiagram.pdf
- **Task 2:** 
- **Task 3:** 
- **Task 4:** 


---
## Task 1 Loan Management System
**Simplified flow of the loan application System:**\
Loan Application Submitted -> Validate, Assess & Analyze\
-> Approval/Rejection -> Loan disbursed -> Repayment Management
### Design Decisions
I setup a state diagram with three main segments of the LMS process. The process starts with an application reception state where an applicant is validated. It then moves to an assessment and risk analysis phase that focuses closer on money management. In modern systems these are powered by AI tools. A formal approval & disbursement state gives a final green light before a loan is fully disbursed. The concluding state is Repayment Management where an applicant will enter a loop of reminders and payments with payment validation until the loan is fully repaid.
#### Key States:
- Application Received
    - Applicant Verification
    - Credit Worthiness
- Credit Assessment & Risk Analysis
- Application Approval Validator
- Loan Disbursement
- Repayment Management
    - Setup Process
    - Payment Reminder
    - Process Payment Validator

---
## Task 2 Machine Learning Feature Proposal
Credit risk prediction is a critical, yet process-heavy task that is *currently* being performed manually. How can a machine learning system be properly leveraged to enhance efficiency and reduce human error?
### Deliverables
- Plausibility of a credit risk modeling step that assesses the risk of a given loan.
- Write-up of how machine learning systems are currently used for similar applications.
- Brief feature proposal.


How system might work
Potential challenges & limitations

- How risk moderling sys work
- Data model will need - input vars to be used to predict credit risk
- What the model will output. What will output vars look like.
- Explore possible model types & architectures to be used
- after collecting ideas, write up brief proposal

## Feature Proposal
### Goal
To help create strategies that maximize return (interest) and minimize risk (defaults)

Defaults and prepayments = a risk in loss of interest revenue to the lender

Key indicators (factors) in risk models
- Profitability ratios
Repayment capacity
Solvency
Duration of credit report
Guarantees
Company size
Loan number
Ownership Structure
Corporate Banking relationship (duration)

Modeling

### How risk moderling sys work
A Credit Risk Modeling System works by estimating the probability that a risk, i.e. a loss in revenue to the lender, will occur. The system allows a company to lower risk by adjusting factors they can control, or hedging losses for factors they can't control.

Popular predictive models include: logistic regression, decision trees, neural networks, Naive Bayes classifier.

### Data model will need - input vars to be used to predict credit risk
Data needed: Historical data on actual loans to 'fit' the risk model. The fitted model provides estimated probabilities at different values of the factors
### What the model will output. What will output vars look like.
### Explore possible model types & architectures to be used
K-Nearest Neighbors
Logistic Regression
Decision Trees
Neural Networks
### after collecting ideas, write up brief proposal