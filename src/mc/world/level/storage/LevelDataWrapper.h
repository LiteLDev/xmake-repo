#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/world/level/LevelListCacheObserver.h"
#include "mc/world/level/storage/LevelData.h"

// auto generated forward declare list
// clang-format off
class DataWrapperUpdater;
class ILevelListCache;
// clang-format on

class LevelDataWrapper : public ::LevelListCacheObserver {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::LevelData*>                        mLevelDataFromLevel;
    ::ll::TypedStorage<8, 1464, ::LevelData>                      mLevelDataFromDisk;
    ::ll::TypedStorage<8, 8, std::unique_ptr<DataWrapperUpdater>> mUpdater;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LevelDataWrapper();

    virtual void onLevelUpdated(std::string const&);

    virtual void onLevelDeleted(std::string const&);

    virtual void onStorageChanged();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LevelDataWrapper();

    MCNAPI ::LevelData& operator*();

    MCNAPI ::LevelData const* operator->() const;

    MCNAPI ::LevelData* operator->();

    MCNAPI void reset();

    MCNAPI void resetLevelDataPointer();

    MCNAPI void setLevelData(::ILevelListCache&, std::string const&);

    MCNAPI void setLevelData_DEPRECATED(::LevelData&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onLevelUpdated(std::string const&);

    MCNAPI void $onLevelDeleted(std::string const&);

    MCNAPI void $onStorageChanged();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class LevelDataWrapper {};
#endif // @header-generator platform
