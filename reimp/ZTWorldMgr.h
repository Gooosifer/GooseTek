#ifndef ZTWORDLMGR_H
#define ZTWORDLMGR_H

#include "Windows.h"
#include <vector>
#include <sol/sol.hpp>

class ZTWorldMgr {
    public:
    // char padding[536];
    ZTWorldMgr() {};
    ~ZTWorldMgr() {};

    static void* getWorldMgr();
    static DWORD getOffset(DWORD);

    static std::vector<DWORD*> getAllEntitiesOfType(int ids[]);
    static void* getEntityTypeByID(int);
    static void makeInvisible(std::vector<DWORD*>, bool);
    static void ExportClassToLua(sol::state_view&);
};

#endif // ZTWORDLMGR_H
