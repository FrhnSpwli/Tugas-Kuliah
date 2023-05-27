#creating a file
# Path: 2 Desember 2022\file.py

import csv

class FormatData2:
    def __init__(self, name="", Age=0, Married=False):
        self.name = name
        self.Age = Age
        self.Married = Married

    def __str__(self):
        OutString = "'{0}', {1}, {2}".format(self.name, self.Age, self.Married)
        return OutString

    def SaveData(Filename = "", DataList = []):
        with open (Filename, "w", newline ='\n') as csvfile:
            DataWriter = csv.writer(csvfile, delimiter=',', quotechar='"', quoting=csv.QUOTE_NONNUMERIC)
            DataWriter.writerow(DataList)
            csvfile.close()
            print("Data Saved!")