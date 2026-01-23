#pragma once

#include <stddef.h>

typedef struct {
    ptrdiff_t crc64;
    ptrdiff_t CFilePathStrIdCtor;
    ptrdiff_t luaRegisterGlobals;
    ptrdiff_t lua_pcall;
	ptrdiff_t CallFunctionWithArguments;

	// Pickups
    ptrdiff_t OnCollectPickup;
	ptrdiff_t PlayPickupSound;
    ptrdiff_t ShowItemPickupMessage;

	// Audio
	ptrdiff_t PlaySoundWithCallback;
} functionOffsets;

typedef unsigned long long crc64_t;

struct CRntString {
	char* str;
	int length;
	void* allocator;
	bool usesMainAllocator;
	crc64_t hash;
	bool isEmpty;
};

struct CStringInstance {
	void* stringPoolEntry;
	unsigned int uses;
	CRntString string;
	bool storeInPool;
	unsigned int unknown;
};

struct CStrId {
	CStringInstance *value;
};
