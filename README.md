The guidelines of Mini Hackathon 

Lab Session 1 – Development and GitHub submission: The final working prototype must be completed, tested, and uploaded to GitHub. The repository must include the C source code, README.md, and sample test cases with outputs. Students must submit the GitHub repository link to the concerned faculty member. 
Presentation: The presentation will be dedicated to team presentations, live demonstrations, and evaluation. Students must explain their program logic, demonstrate the working solution, and answer questions from the faculty.

Assessment: Evaluate all teams using the common 10-mark evaluation rubric provided in the guidelines. Ensure that all team members contribute to the project and demonstrate an individual understanding of the submitted code.
Selection of the best team: 2 best team should be identified from each batch and recommended to the respective subject coordinator for the consolidated selection process.
Submission requirements
Each team must create a GitHub repository for its Mini Hackathon project. The working C program and required project files must be uploaded during the two-hour Lab 1 session, and the repository link must be submitted to the concerned faculty member before the session ends.
The repository must contain the following:
C Source Code: The complete, working C program (.c file).
README.md: A README document containing:
o Project title and problem statement.
o Team number, batch, and names of all three team members.
o Objectives and features of the program.
o Algorithm or pseudocode and flowchart, where appropriate.
o C programming concepts used.
o Instructions to compile and execute the program.
o Sample test cases with expected and actual outputs.
Presentation (PPT): A PowerPoint presentation covering the problem statement, proposed solution, program logic, implementation, sample outputs, and conclusion.
Additional files (optional): Flowcharts, screenshots, or other supporting documentation, if required.
Suggested GitHub repository naming convention: Batch_TeamNo_ProblemName
Example repository structure:
Batch01_Team01_CanteenBilling/
├── README.md
├── canteen_billing.c
├── presentation.pptx
├── flowchart.png
└── screenshots/
└── sample_output.png

1. **Abstract — What was done, why, how, and what was found?**
   The abstract should normally be written as one compact paragraph of about 180–300 words, unless the journal specifies otherwise. It should contain five elements: brief background/problem, research gap, objective, methodology, major numerical results, and conclusion/significance. Avoid citations, equations, unexplained abbreviations, lengthy background, and vague claims such as “excellent performance.” Wherever possible, report actual values such as accuracy, F1-score, RMSE, efficiency improvement, processing time, etc. A good abstract follows the sequence: **Problem → Gap → Proposed approach → Experimental setup → Main results → Significance**.

2. **Keywords — How should the article be indexed and discovered?**
   Usually provide 4–8 keywords. Choose technical and searchable terms that represent the problem, methodology, application area, and major technology. Avoid simply repeating every word from the title. For example, an AI paper may use keywords representing the application, model family, optimization technique, evaluation task, and deployment environment.

3. **Introduction — Why is this research necessary?**
   The introduction should move from broad context to the specific research problem. A strong introduction generally contains: importance of the field, current technological/scientific problem, limitations of existing solutions, the precise research gap, motivation for the proposed work, research objective, contributions, and paper organization. Avoid turning the introduction into a long literature review. Every paragraph should gradually lead the reader toward the question: **“Why does this paper need to exist?”**

4. **Problem Background / Motivation — What practical or scientific problem remains unresolved?**
   Where the journal permits, provide a separate subsection explaining the real-world motivation. Describe the limitations of existing systems, practical requirements, environmental constraints, computational limitations, cost considerations, reliability problems, scalability issues, or unanswered scientific questions. This section should make clear why solving the problem matters.

5. **Literature Review / Related Work — What has already been done?**
   Do not merely write one paragraph for Paper A, another for Paper B, and another for Paper C. SCI-level literature reviews should provide **critical synthesis**. Group prior studies according to methods, datasets, technologies, applications, or chronological development. Compare their strengths and weaknesses. Explain what remains unresolved. Recent journal papers, especially from the last 3–5 years, should receive adequate attention while important foundational papers should also be retained. End the literature review with a clearly defined research gap.

6. **Comparative Literature Table — Where exactly is the research gap?**
   A strong paper usually benefits from a table such as: **Reference | Year | Method | Dataset | Input Features | Performance | Strength | Limitation | Research Gap**. In AI/ML papers, additional useful columns include model architecture, number of parameters, training data size, hardware, inference time, explainability, external validation, and real-world deployment. This table makes the novelty of the new work easier for reviewers to understand.

7. **Research Gap — What is missing in existing research?**
   The research gap should not simply state that “accuracy can be improved.” Explain specifically what is lacking. Examples include poor cross-dataset generalization, high computational complexity, insufficient real-time performance, lack of multimodal information, class imbalance, limited dataset size, absence of external validation, weak explainability, excessive memory usage, lack of hardware implementation, or failure under difficult environmental conditions. The proposed method must directly address the stated gap.

8. **Research Objectives — What does the study intend to achieve?**
   Objectives should be concrete and measurable. Avoid vague objectives such as “to develop a better system.” Instead write objectives such as developing a computationally efficient framework, improving detection under challenging conditions, reducing model complexity, validating generalization across multiple datasets, performing statistical comparison, or evaluating deployment feasibility.

9. **Research Questions / Hypotheses — What questions will the experiments answer?**
   These are optional but strongly useful. Example questions include: Does the proposed method significantly outperform existing baselines? Does a particular architectural component improve performance? How robust is the method under noise, illumination variation, class imbalance, or domain shift? Does the proposed approach reduce inference time or memory consumption? Hypotheses are especially useful when statistical significance testing is performed.

10. **Contributions — What is genuinely new in the paper?**
    Provide approximately 3–5 specific contributions. Each contribution should represent something that can be verified in the manuscript. Good contributions include a new architecture, new mathematical formulation, novel optimization strategy, new dataset, new feature-fusion mechanism, new theoretical analysis, extensive benchmark evaluation, real-time implementation, or new explainability framework. Avoid contributions such as “we reviewed the literature” unless the manuscript is actually a review article.

11. **Proposed Methodology / Materials and Methods — Exactly how was the work performed?**
    This is one of the most important sections. It should contain enough detail for another researcher to reproduce the work. Depending on the paper, include system architecture, workflow, data collection, preprocessing, mathematical model, proposed algorithm, model components, optimization procedure, training process, testing procedure, software tools, hardware environment, and evaluation metrics. Each component should be scientifically justified rather than merely described.

12. **Overall Framework Figure — How does the complete system operate?**
    Include a clear block diagram showing the full flow such as **Input → Preprocessing → Feature Extraction → Proposed Module → Classification/Prediction → Output/Evaluation**. Every block appearing in the figure should be explained in the methodology. Avoid decorative figures that do not communicate technical information.

13. **Dataset / Data Collection — What data were used?**
    Describe dataset name, source, number of samples, number of classes, input dimensions, acquisition process, geographical/source diversity, class distribution, labeling procedure, train-validation-test division, and any ethical/privacy considerations. If multiple datasets are used, present a dataset comparison table. Never hide class imbalance or unclear dataset splits.

14. **Data Preprocessing — How were the raw data prepared?**
    Explain resizing, normalization, standardization, missing-value handling, noise removal, augmentation, segmentation, filtering, encoding, feature extraction, outlier removal, or dimensionality reduction. For every major operation, explain why it is required. Ensure preprocessing does not cause information leakage between training and test sets.

15. **Mathematical Formulation — What is the theoretical basis of the model?**
    Define important variables and equations. Explain each equation immediately after presenting it. Do not include mathematics simply to make the manuscript look sophisticated. Every equation should contribute to understanding the proposed method. Clearly define symbols, input-output relationships, objective functions, loss functions, optimization variables, constraints, and decision rules.

16. **Proposed Algorithm / Pseudocode — How can the method be implemented?**
    Provide a step-by-step algorithm including inputs, initialization, processing stages, iterative steps, stopping conditions, and outputs. Pseudocode should correspond exactly to the methodology and architecture figure. If the method has training and inference phases, distinguish them.

17. **Model Architecture — What are the internal components?**
    Explain individual layers/modules, feature extractors, attention mechanisms, fusion blocks, classifiers, regression heads, optimization components, or decision stages. In deep-learning papers, provide input size, layer configuration, activation functions, normalization, dropout, learning mechanism, number of parameters, and output dimensions where appropriate.

18. **Training Configuration / Experimental Setup — Under what conditions was the model trained?**
    Report software framework, programming language, operating system if relevant, CPU/GPU model, RAM, batch size, epochs, learning rate, optimizer, loss function, scheduler, early stopping, random seed, initialization, input resolution, augmentation, and other hyperparameters. Without this information, experiments may not be reproducible.

19. **Baseline Methods — What was the proposed method compared against?**
    Compare against meaningful methods rather than weak baselines. Include simple baseline methods, established traditional techniques, commonly used ML methods, strong deep-learning architectures, and recent state-of-the-art methods where applicable. Make comparisons fair by using comparable datasets and evaluation protocols.

20. **Evaluation Metrics — How was performance measured?**
    Define the metrics before presenting results. Depending on the task, metrics may include Accuracy, Precision, Recall, Specificity, F1-score, ROC-AUC, mAP@0.5, mAP@0.5:0.95, IoU, Dice Score, MAE, MSE, RMSE, MAPE, R², PSNR, SSIM, inference time, FPS, FLOPs, parameters, memory consumption, energy consumption, or communication overhead. Do not compare different metrics as though they were interchangeable.

21. **Results — What did the experiments show?**
    Present the experimental findings clearly without excessive interpretation initially. Use tables and graphs to report major results. Every table and figure must be discussed in the text. Report not only the proposed model's result but also competing methods. Use proper units and consistent precision. Do not manufacture or assume experimental values.

22. **Main Performance Comparison — Does the proposed approach outperform alternatives?**
    Include a major comparison table such as **Model | Accuracy | Precision | Recall | F1 | Computational Cost | Parameters | Inference Time**. For regression or forecasting, substitute appropriate metrics. Highlight the proposed model but ensure all values come from valid experiments or properly cited published work.

23. **Ablation Study — Which component is responsible for the improvement?**
    For a new architecture, an ablation study is highly desirable. Remove or alter individual components and report the effect. For example: Baseline → +Feature Module → +Attention → +Optimization → Complete Proposed Model. This demonstrates that each novel component contributes meaningfully.

24. **Hyperparameter / Sensitivity Analysis — How dependent are results on configuration choices?**
    Evaluate important parameters such as learning rate, batch size, threshold, number of layers, filter size, attention heads, optimization parameters, or fusion weights. Show curves or tables. This strengthens confidence that performance was not obtained from an arbitrary configuration.

25. **Convergence Analysis — Does the training process behave reliably?**
    Show training and validation loss/accuracy curves where relevant. Discuss convergence speed, overfitting, underfitting, oscillation, stability, and early stopping. For optimization algorithms, show objective value versus iterations.

26. **Statistical Analysis — Are improvements statistically meaningful?**
    Wherever appropriate, report multiple experimental runs using mean ± standard deviation. Consider confidence intervals and statistical significance tests such as paired t-test, Wilcoxon test, Friedman test, ANOVA, or appropriate non-parametric alternatives. A tiny improvement should not be claimed as meaningful without evidence.

27. **Robustness / Generalization Analysis — Does the model work beyond one controlled experiment?**
    Evaluate difficult conditions such as noise, low illumination, unseen environments, different sensors, different geographic regions, class imbalance, corrupted input, changing operating conditions, cross-dataset testing, or external validation. This is increasingly important for strong SCI papers.

28. **Computational Complexity — What does the method cost?**
    Report parameters, FLOPs/MACs, memory requirements, training time, inference latency/FPS, model size, and possibly energy consumption. A model that improves accuracy by 0.5% while increasing computation tenfold may not represent a useful advance. Discuss the accuracy-efficiency trade-off.

29. **Explainability / Interpretability — Why did the model make the prediction?**
    Where applicable, use techniques such as Grad-CAM, SHAP, LIME, attention maps, feature importance, saliency analysis, or interpretable rules. Explain whether the model focuses on scientifically meaningful regions/features rather than artifacts.

30. **Error Analysis — Where does the proposed model fail?**
    This is often missing from beginner manuscripts. Show false positives, false negatives, difficult cases, confusion matrices, or prediction-error distributions. Explain likely reasons for failure. Reviewers generally value a paper that understands its weaknesses.

31. **Results and Discussion — What do the results actually mean?**
    Discussion must go beyond repeating numerical results. Explain why the proposed method performed better or worse, which component generated improvements, how the findings compare with previous research, whether results support the original hypothesis, what trade-offs exist, and what the scientific implications are. Distinguish correlation from causation and avoid exaggerated statements.

32. **Comparison with State of the Art — How does the work relate to recent published research?**
    Use recent, relevant literature. Clearly state whether comparisons are performed under identical conditions or whether values are taken from published papers. If datasets or evaluation protocols differ, explicitly state that the values are **reference comparisons rather than strictly controlled head-to-head comparisons**.

33. **Practical Implications / Application — Why do the results matter outside the experiment?**
    Explain possible use in real systems, industry, healthcare, transportation, agriculture, cybersecurity, robotics, smart cities, communication networks, etc. Discuss deployment conditions, resource requirements, scalability, and realistic benefits.

34. **Limitations — What can the current study not claim?**
    Every strong paper should acknowledge limitations. Examples include small dataset, single-center data, geographical limitation, simulation-only testing, lack of external validation, hardware constraints, class imbalance, computational cost, limited number of baselines, annotation uncertainty, limited environmental variation, or lack of real-world deployment. Limitations do not weaken a good paper; hiding them does.

35. **Future Research Directions — What should be investigated next?**
    Future work should directly arise from identified limitations rather than contain generic statements such as “accuracy will be improved in the future.” Mention concrete next steps such as larger multicenter datasets, multimodal data, lightweight deployment, cross-domain adaptation, federated learning, continual learning, uncertainty estimation, real-time validation, or hardware implementation as appropriate.

36. **Conclusion — What is the main scientific message?**
    The conclusion should briefly restate the problem, proposed solution, most important findings, major contribution, practical/scientific significance, limitations where appropriate, and future direction. Do not introduce new experiments, new references, or unexplained concepts. A strong conclusion answers: **What was achieved? How well did it work? Why does it matter? What remains to be done?**

37. **Author Contributions — Who did what?**
    Where required, use the journal's CRediT taxonomy: Conceptualization, Methodology, Software, Validation, Formal Analysis, Investigation, Data Curation, Writing—Original Draft, Writing—Review & Editing, Visualization, Supervision, Project Administration, and Funding Acquisition.


38. **References — Is every scientific claim properly supported?**
    Use recent, high-quality and directly relevant sources. Prefer peer-reviewed journal articles from reliable indexed venues, while retaining seminal papers where necessary. Every in-text citation must appear in the reference list and every listed reference should normally appear in the manuscript. Verify author names, article title, journal, year, volume, issue, pages/article number, and DOI. Never submit references containing placeholders such as “citation required” or “details to be confirmed.”

### A simple formula beginners can remember

A strong journal paper usually follows this logic:

**Problem → Existing Knowledge → Gap → Objective → Proposed Solution → Experimental Validation → Results → Explanation → Limitations → Scientific Contribution → Conclusion**



 For a typical 7,000–10,000-word research article is approximately: **Abstract 2–3%; Introduction 12–15%; Related Work 12–18%; Methodology 25–30%; Results 15–20%; Discussion 10–15%; Limitations/Future Work 3–5%; Conclusion 3–5%**.
