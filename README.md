# Project_Graduation
# Design of an artificial vision system in the filling process of the IPA3 Lucas Nülle control station

### There is the code used in my last project as student in ESPOL University, 

    The project was worked in the bottle filling station of the IPA26 lucas Nülle plant, 
    which had different stations, by artificial vision, under the opevcv library and code was created
    according to the need of the project, images were taken by two cameras, 
    in which it was filtered, at grayscale, and pixel levels, to determine if the bottles that 
    entered in the filling station, returned without lids, without liquid or without garbage, 
    by means of pixel counting ranges. The segmentation was succesfull and the results were 
    shown on an hmi screen connected to a PLC, which connected to the cameras through Visual 
    Studio with c # programming, from visual studio the error signals were sent and specifying 
    which bottle of the 6 that entered , entered with a lid, with liquid, or with garbage, and in 
    the event that none of those situations existed, the signal was sent that everything is correct, 
    to start dispensing liquid in the bottles.

