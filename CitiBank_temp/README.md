# Background Info
I've started as a new intern in a Technology Analyst Program. Projects I will focus on involve internal systems and products.
## Software Used Throughout
- Miro
- Visual Studio
\
---
## Task 1 Loan Management System
Simplified flow of the loan application System.\
Loan Application -> Review -> Approval/Rejection\
- Approval -> Loan disbursed -> borrower begins regular payments
### State Diagram
A state diagram uses UML notation to represent states the system is in at finite instances of time.
#### Design Decisions
I setup three main segments of the LMS process. The process starts with an application reception state where an applicant is validated. It then moves to an assessment and risk analysis phase that focuses closer on money management. In modern systems these are powered by AI tools. A formal approval & disbursement state gives a final green light before a loan is fully disbursed. The concluding state is Repayment Management where an applicant will enter a loop of reminders and payments with payment validation until the loan is fully repaid.
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