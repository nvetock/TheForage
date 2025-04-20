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
### Goal
To help create strategies that maximize the company's return through interest, while minimizing risk of the loan being defaulted causing the company to lose in profit.
### Challenges
This being my first exposure into machine learning systems, I did a lot of reading around different algorithms. K-nearest neighbors, logistic regressions, decision trees. I also learned of a lot more that I didn't fully dive into.
\
I haven't built any of these algorithms before. Given some time experimenting with different types of algorithms would help me in knowing the why behind choosing one algorithm over another.
\
My proposal ended up being accurate to the expected solution in some ways. Areas I didn't write much into were scenarios of data drifting, retraining and keeping data adaptable.

---
## Task 3 Build Stock Market Monitoring tool in Java
