#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class LevelStorage;
class SavedData;
// clang-format on

class SavedDataStorage {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::LevelStorage*>                              levelStorage;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, SavedData*>> savedDatas;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::LevelStorage*>                                    levelStorage;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::SavedData*>> savedDatas;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    SavedDataStorage();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~SavedDataStorage();
#else // @header-generator platform
    virtual ~SavedDataStorage() = default;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _save(::SavedData const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void _save(::SavedData const& data);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool loadAndSet(::SavedData&, std::string const&);

    MCNAPI void set(std::string const&, ::SavedData&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCNAPI bool loadAndSet(::SavedData& inoutData, ::std::string const& id);
#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
