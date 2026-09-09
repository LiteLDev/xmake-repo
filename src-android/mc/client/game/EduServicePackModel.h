#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/game/ServicePackModel.h"

// auto generated forward declare list
// clang-format off
class ContentAcquisition;
class IMinecraftEventing;
class IResourcePackRepository;
class ResourcePackManager;
// clang-format on

class EduServicePackModel : public ::ServicePackModel {
public:
    // prevent constructor by default
    EduServicePackModel();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EduServicePackModel();

    virtual void cancel(std::string const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EduServicePackModel(
        ::ContentAcquisition&,
        ::IResourcePackRepository&,
        ::ResourcePackManager&,
        ::IMinecraftEventing&,
        bool
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::ContentAcquisition&, ::IResourcePackRepository&, ::ResourcePackManager&, ::IMinecraftEventing&, bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $cancel(std::string const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
