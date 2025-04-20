# Credit Risk Modeling Proposal
Credit risk modeling systems are used to provide the probability, in the form of a percentage of risk, that an individual will default on a loan. The model is provides valuable insights based on the mathematical law of large numbers. If a large sample of historical data is available with the appropriate factors and target outcome, the more accurate a machine learning algorithm's output will be.
\
**The benefits in using a machine learning system are:**
- Increase in overall speed of calculations
- Ease of access & management over a large (and growing) dataset
- Risk percentage output that can be adjusted dynamically
- Output calculations from different models that can be compared for more accurate predictions
## Data Requirements
A system like this requires a set of historical data that consists of all input variables to be associated with the binary target outcome (was the loan defaulted or not).
\
**Possible risk factors:**
- Loan amount
- Age
- Employment status
- Education
- Income
- Credit score
- Loan history
- Outstanding loans
\
**To aide in building a good system:**
- The data needs to be specific for loan type - a loan taken out by an individual is going to look very different from a loan taken out by a business.
- The target output needs to be binary - in this case was the loan defaulted or not defaulted.
- Data needs to be cleaned for clarity.
- The input variables need to be static - new input variables can't easily be added in later without a large overhaul on the overall database.
## Data Outputs
The important data output will be defined by the question 'What is the percentage risk this loan will be defaulted?'. Having an output that can provide different angles into *how* that percentage is reached would be valuable for loan officers.
\
Based on a risk threshold set by the company, a loan application could also be marked with a binary outcome of whether the loan will likely be defaulted or not, to allow a loan officer to make the final decision.
## Architecture
The more common machine learning algorithms for credit risk modeling are: K-Nearest Neighbors, Logistic Regression and Random Forest Decision Trees.
\
**K-Nearest Neighbors** is a linear pattern model, it's the most simplistic of the three which provides it's answer based on a percentage given by the *K* data points around it. With a large dataset and many input features it can be very powerful.
\
**Logistic Regression** is another linear pattern model that outputs a line based on the overall graph of data. This line determines percentage risk based on the inputs that inform where a data point would be located on this line.
\
**Random Forest Decision Trees** can pick-up on non-linear data patterns. They use a combination of dissected graphs to traverse conditionals based on a data point's input. Those graph's outcomes are then compared to produce a percentage.
\
The architecture I'm recommending will be using a Logistic Regression model. This model works well with the credit risk model's need for dynamic output and provides a nice visual line graph for the dataset's overall trend that will be simplest for loan officers to use quickly.
## Risks & Challenges
Some of the risks and challenges associated with this credit modeling system is understanding that predictions received by the machine learning algorithm are not always exact. There may be unpredictable outside factors that can influence an outcome that a dataset can't contain. One way to mitigate prediction error is to adjust known-controllable input variables to produce more of a gradient outcome.
\
Another challenge is balancing total amount of input factors. A high amount of input factors may increase granularity, but also increases time spent producing clean data and may lessen the beginning historic dataset.