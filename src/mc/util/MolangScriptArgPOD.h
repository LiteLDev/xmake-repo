#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/legacy/ActorUniqueID.h"
#include "mc/util/MolangLoopBreak.h"
#include "mc/util/MolangLoopContinue.h"
#endif // @header-generator platform

// auto generated inclusion list
#include "mc/util/MolangLoopBreak.h"
#include "mc/util/MolangLoopContinue.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ItemStackBase;
// clang-format on

union MolangScriptArgPOD {
public:
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    constexpr ~MolangScriptArgPOD() {}
    constexpr MolangScriptArgPOD() : _mData(0) {}
    constexpr MolangScriptArgPOD(float val) : mFloat(val) {}
    constexpr MolangScriptArgPOD(uint64 val) : mHashType64(val) {}
    constexpr MolangScriptArgPOD(MolangLoopBreak val) : mLoopBreak(val) {}
    constexpr MolangScriptArgPOD(MolangLoopContinue val) : mLoopContinue(val) {}
    constexpr MolangScriptArgPOD(Actor const* val) : mActorPtr(const_cast<Actor*>(val)) {}
    constexpr MolangScriptArgPOD(ActorUniqueID val) : mActorId(val.rawID) {}
    constexpr MolangScriptArgPOD(ItemStackBase const* val) : mItemStackBasePtr(const_cast<ItemStackBase*>(val)) {}
    constexpr MolangScriptArgPOD& operator=(MolangScriptArgPOD const& other) {
        if (this != &other) _mData = other._mData;
        return *this;
    }
    constexpr bool operator==(MolangScriptArgPOD const& rhs) const { return _mData == rhs._mData; }
    void           clear() { _mData = 0; }

public:
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<4, 8>      mFloat;
    ::ll::UntypedStorage<8, 8>      mHashType64;
    ::ll::UntypedStorage<1, 8>      mLoopBreak;
    ::ll::UntypedStorage<1, 8>      mLoopContinue;
    ::ll::UntypedStorage<8, 8>      mActorPtr;
    ::ll::UntypedStorage<8, 8>      mActorId;
    ::ll::UntypedStorage<8, 8>      mItemStackBasePtr;
    ::ll::TypedStorage<8, 8, ulong> _mData;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, uint64>               _mData;
    ::ll::TypedStorage<8, 8, int64>                mActorId;
    ::ll::TypedStorage<8, 8, ::Actor*>             mActorPtr;
    ::ll::TypedStorage<4, 8, float>                mFloat;
    ::ll::TypedStorage<8, 8, uint64>               mHashType64;
    ::ll::TypedStorage<8, 8, ::ItemStackBase*>     mItemStackBasePtr;
    ::ll::TypedStorage<1, 8, ::MolangLoopBreak>    mLoopBreak;
    ::ll::TypedStorage<1, 8, ::MolangLoopContinue> mLoopContinue;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
};
#else // @header-generator platform no-eol
};
#endif // @header-generator platform
