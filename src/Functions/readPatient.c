#include "../store.h"

void readPatient(){
    FILE *file = openPatientsFileRead();
    Patient patientArray[MAX_MEDCINES];
    int count = populatePatientArray(file, patientArray);

    fclose(file);

    for (int i = 0; i < count; i++) {
        printf("Id of patient: %d\nName of patient: %s\nSSN of patient: %lld\n\n", patientArray[i].id, patientArray[i].name, patientArray[i].ssn);
    }

}
