#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class PhotoItemSavedData;
// clang-format on

class PhotoItemSavedDataCollection {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, std::unordered_map<ActorUniqueID, std::unique_ptr<PhotoItemSavedData>>> mPhotoData;
#else // @header-generator platform
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ActorUniqueID, ::std::unique_ptr<::PhotoItemSavedData>>>
        mPhotoData;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI PhotoItemSavedDataCollection();

    MCNAPI ::PhotoItemSavedData* _loadPhotoData(::ActorUniqueID const&, ::ActorUniqueID const&, std::string const&);

    MCNAPI ::PhotoItemSavedData* getPhotoSavedData(::CompoundTag const&);

    MCNAPI ~PhotoItemSavedDataCollection();
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
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ::PhotoItemSavedData*
    _loadPhotoData(::ActorUniqueID const& id, ::ActorUniqueID const& owner, ::std::string const& name);

    MCAPI ::PhotoItemSavedData* getPhotoSavedData(::CompoundTag const& instance);
#endif
#endif // @header-generator platform
    // NOLINTEND
};
