Issue Summary
An expansion that prompted a codebase upgrade was initiated and launched. However, a day prior to its deployment, tickets were opened regarding problems arising from the update. Upon review, an attending officer confirmed the issues, leading the engineering team to trace the bug. After exploring several incorrect hypotheses, the bug was ultimately discovered to be caused by a misspelling in the database model. Once corrected, a new update was promptly pushed. Damage was limited to under 3 hours from the time of detection.

Events Timeline
04-12-2022 7:23 AM GMT+1 - Some users opened a ticket that they couldn't sign in to their dashboard.
04-12-2022 8:12 AM GMT+1 - Murphy, a customer representative reviewed the ticket and tested it out to find the same issue.
04-12-2022 8:25 AM GMT+1 - Murphy alerted the engineers and We investigated the controllers and the views for inconsistencies.
04-12-2022 9:10 AM GMT+1 - We assumed the db schema/model being used was either at fault or used incorrectly after a recent update because the error message on console indicated that the model was raising an error preventing proper communication with the database.
04-12-2022 9:35 AM GMT+1 - We checked that the views might not be validating the form fields the right way to satisfy the model requiremets, but eventually wasn't the cause.
04-12-2022 9:52 AM GMT+1 - The engineering team eventually found a mispell in the last built that was shipped out and made the corrections.
04-12-2022 10:05 AM GMT+1 - Everything eventually returned back to normal.

Root Cause And Resolution
The newly developed database migration model encountered an error originating from a code review conducted a day earlier. This error subsequently prevented users from accessing their dashboards. After diligent investigation, the engineering team traced the bug to the database model setup, where a misspelling was identified and corrected, ultimately resolving the issue.

Corrective And Preventative Measures
Setup a continuous integration pipeline to run a build on each pull request branch. This would ensure that builds are passing in the pull request branch before it is merged with the deployment branch.
Setup a monitoring system for the database and application servers to keep track of any issue that may occur.
Develop tests that need to be passed for each new feature and those tests should be passing before they are merged with the deployment branch.
