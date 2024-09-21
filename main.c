#include <windows.h>
#include <stdint.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

typedef void* PVOID;

typedef struct {
    PVOID god_gadget;
    PVOID gadget1;
    PVOID gadget2;
    PVOID gadget3;
    PVOID gadget4;
    PVOID gadget5;
    PVOID gadget6;
    PVOID gadget7;
    PVOID gadget8;
    PVOID gadget9;

    size_t ntprotectvm;
    int64_t ntprotectvm_id;
    HANDLE processhandle;
    size_t memory_protections;

    size_t ntwaitobj;
    int64_t ntwaitobj_id;
    HANDLE objhandle;
    int64_t *delay;

    size_t bencrypt;
    size_t bdecrypt;
    PVOID key_handle; 
    size_t iv_len;
    PVOID output_var; 
} RopConfiguration;

typedef struct {
    PVOID* section_address;
    size_t* section_size;
    size_t original_protection;
    PVOID output;
} SectionInfo;

typedef struct {
    PVOID* base_address;
    size_t* total_size;
    PVOID iv_e;
    PVOID iv_d;
    size_t n;
    size_t sec_size;
    SectionInfo* sections;
} SectionsWrapper;

extern void SpoofAndCall(size_t unwinder, void** args, int is_syscall, uint32_t id);
extern void Fluctuate(PVOID config_structure, PVOID sections_structure);

void random_bytes(unsigned char* buf, size_t len) {
    for (size_t i = 0; i < len; i++) {
        buf[i] = rand() % 256;
    }
}

int fluctuate_from_pattern(uint32_t config_delay, HANDLE event_handle, uint8_t pattern[2]) {
    
}

int fluctuate_from_address(uint32_t config_delay, HANDLE event_handle, size_t base_address) {
    
}

int fluctuate(int config_encryptall, uint32_t config_delay, HANDLE event_handle) {
    
}

int fluctuate_core(int config_encryptall, uint32_t config_delay, HANDLE event_handle, size_t specified_base_address, uint8_t pattern[2]) {
    size_t iv_size = 16;
    unsigned char aes_128_key[16];
    unsigned char aes_iv[16];

    random_bytes(aes_128_key, sizeof(aes_128_key));
    random_bytes(aes_iv, sizeof(aes_iv));

    RopConfiguration configuration = {0};


    SectionsWrapper sections_wrapper;


    return 0;
}

size_t get_gadget_offset(const uint8_t* base_address, size_t section_size, const uint8_t* gadget, size_t gadget_len) {
    
    return 0; 
}

int get_pe_metadata(const void* module_ptr, PeMetadata* pe_metadata) {
    
    return 0;
}

size_t get_syscall_addr(intptr_t base_address) {
    
    return 0;
}

size_t get_random_syscall(const EAT* eat) {
    
    return 0;
}

size_t get_pe_baseaddress(uint32_t threshold, uint8_t pattern[2]) {
    
    return 0;
}

size_t align_to_mempage(size_t vsize) {
    return (vsize + 4095) & ~4095;
}