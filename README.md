# Hospital-Obstetrical-Triage-Register-System

Overview:
-Built a hospital software  system  to  handle  the  admission  of pregnant patients to an obstetrical  triage (the waiting/preparation stage at the hospital before entering the birthing unit).  
-The software realizes a computerized obstetrical triage patient register (i.e. a queue of expectant mothers with signs of  impending  labour  waiting  for  a  bed  in  the  birthing  unit). Patients are then processed in the order of arrival i.e. FIFO queue.

Description:
- The systems first asks for the patient's name,  health  card  number,  condition,  cervix  dilation (0-10cm) along with one of the patient conditions: UNKNOWN, LABOUR, and         ADMIT.
- If a patient’s condition is UNKNOWN, the patient is examined for cervix dilationby the nurse. The nurse enters the cervix dilation information to the system.
  - If  the  patient’s  cervix  dilation  is  >=  4cm,  her condition  gets  changed to ADMIT, a  message is  displayed  showing  the  patient’s  information,  and  finally       she is removed from the queue.
  - If  the  patient’s  cervix  dilation  is < 4cm,  her condition  gets  changed  to  LABOUR. The patient again gets added back to the end of the queue.
- If  a  patient’s  condition  is  LABOUR,  the  patient is examined  for  cervix  dilationby the nurse. The nurse enters the cervix dilation information to the system.
  - If  the  patient’s  cervix  dilation  is  >=  4cm,  her condition  gets  changed  to  ADMIT, a message  is  displayed  showing  the  patient’s  information,  and  finally       she is removed from the queue.
  - If the patient’s cervix dilation is < 4cm, her condition stays the same i.e. LABOUR. The patient again gets added back to the end of the queue.
- There is a textual  menu  interface  that allows the attending nurse at the registration desk to perform one of the operations: register, examine, or display.  The menu also     supports a quit operation that ends the application.

