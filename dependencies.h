#include <map>
#include <string.h>
#include <iostream>

using namespace std;

map<string, string> commands = {
    {"sanchikah", "ls"},
    {"vishodhanam", "cls"},
    {"nirgachhatu", "exit"},
    {"sahayyam", "help"},
    {"samkaranam-drishyatam", "ver"},
    {"pratidhvani-darshayatu", "echo"},
    {"shirshakam-parivartayatu", "title"},
    
    {"pathah-parivartayatu", "cd"},
    {"sanchikanam-suchi", "dir"},
    {"navamaputam-srijatu", "md"},
    {"sanchikam-nishkasayatu", "rd"},
    {"nasham-kuruta", "del"},
    {"anukriti-kuruta", "copy"},
    {"sthanantaram-kuruta", "move"},
    {"nama-parivartanam-kuruta", "ren"},
    
    {"tantrasya-vivaranam", "systeminfo"},
    {"tantra-vyavasthapanaya-ajna", "wmic"},
    {"karyasuchi-darshayatu", "tasklist"},
    {"karyam-nirasayatu", "taskkill"},
    {"sanganakanama-pradarshayatu", "hostname"},
    {"aham-kah", "whoami"},
    
    {"sanjalasamyojanam-darshayatu", "ipconfig"},
    {"sanjalasamvadam-parikshanam-kuruta", "ping"},
    {"marga-nirikshanam-kuruta", "tracert"},
    {"namasanketasya-anveshanam-kuruta", "nslookup"},
    
    {"madhyamam-parikshanam-kuruta", "chkdsk"},
    {"madhyam-vibhagam-kuruta", "diskpart"},
    {"madhyam-rupanam-kuruta", "format"},
    
    {"upayogakartru-suchi-darshayatu", "net user"},
    {"samuhasya-vivaranam-darshayatu", "net group"},
    {"sanchikayah-gudhalekhanam-kuruta", "cipher"},
    
    {"tantram-nishkriyam-kuruta", "shutdown"},
    {"urjavyavastha-nirdishtam-kuruta", "powercfg"},
    
    {"tantrasamracana-parikshanam-kuruta", "sfc /scannow"},
    {"panji-sampadakam-udghatayatu", "regedit"}
};

int check_spaces(string command) {
    int space_count = 0;
    for (char c : command) {
        if (c == ' ') {
            space_count++;
        }
    }
    return space_count;
}

int give_length(string command) {
    return (check_spaces(command) + 1);
}

char** change_command(char **args) {
    
    // Check if args is empty
    if (args[0] == NULL) {
        return args;
    }

    // Find the length of the original args array
    int original_length = 0;
    while (args[original_length] != NULL) {
        original_length++;
    }

    // New elements to add at the start
    
    string command = commands[args[0]];
    
    int new_elements_count = give_length(command); // Assuming a maximum of 3 new elements
    const char* new_elements[new_elements_count]; 
    
    if (command.empty()) {
        return args;
    }

    char* token = strtok((char*)command.c_str(), " ");
    int i = 0;
    while (token != NULL) {
        new_elements[i++] = token;
        token = strtok(NULL, " ");
    }
    

    // Allocate a new array to hold all elements
    char** modified_args = new char*[original_length + new_elements_count];


    // Copy new elements at the start
    for (int i = 0; i < new_elements_count; i++) {
        modified_args[i] = strdup(new_elements[i]);
    }


    // Copy remaining original args (skipping the first element)
    for (int i = 1; i < original_length; i++) {
        modified_args[new_elements_count + i - 1] = strdup(args[i]);
    }

    // Set the last element to NULL (required for NULL-terminated array)
    modified_args[original_length + new_elements_count - 1] = NULL;

    // Optional: Free the original args to prevent memory leaks
    for (int i = 0; args[i] != NULL; i++) {
        free(args[i]);
    }
    delete[] args;

    return modified_args;
}