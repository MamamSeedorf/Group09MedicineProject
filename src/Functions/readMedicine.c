
#include "../store.h"

void readMedicine(){
    FILE *file = openMedicineFileRead();
    char line[MAX_LINE_LENGTH];
    Medicine* medicineArray = (Medicine*)malloc(MAX_MEDCINES * sizeof(Medicine));
    int count = populateMedicineArray(file, medicineArray);


    fclose(file);
    for (int i = 0; i < count; i++) {
        printf("Id of medicine: %d\nName of medicine: %s\nNDC of medicine: %lld\n\n", medicineArray[i].id, medicineArray[i].name, medicineArray[i].ndc);
    }
}
