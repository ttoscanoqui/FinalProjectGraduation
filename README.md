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

### Canny_code (canny library-opencv)
    This code first filter out any noise ussing Gaussian filter.
    The the intensity gradiente of the image is finded.
    After that apply the non-maximun suppression. This removes pixeles that are not considered to be part of an edge.
    Finally step apply hysteresis, using two thresholds (lower and upper)
### Gray_scale
    This code convert the full color token photos to a gray scale photo, because it is easier process a gray scale foto.
### Imagen_segmentation
    This code divide the bottle in two parts, the first one part of the lid, and the second one the rest of the bottle
    And determinated the range of pixel of both parts that are considered the optimal condition that the bottle have to enter
    to the filling station.
### Characteristic_extraction
    This code extract the numbers of pixel bottle by bottle, in two parts segmentation,(part of lid and rest of the bottle), 
    and compare with the image segmentation data.
### converion_plc_variables
    This code convert and send the signals depending on the results obtained to the plc.

