#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/identity/edu/Role.h"
#include "mc/options/AppConfigData.h"

// auto generated forward declare list
// clang-format off
class IMinecraftEventing;
struct EDUConfigData;
// clang-format on

class EduConfigDataWrapper : public ::AppConfigData<EduConfigDataWrapper> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::EDUConfigData const&> mDataView;
    ::ll::TypedStorage<8, 8, ::IMinecraftEventing*>  mEventing;
    ::ll::TypedStorage<1, 1, ::edu::Role>            mRole;
    ::ll::TypedStorage<8, 24, std::string>           mOid;
    // NOLINTEND

public:
    // prevent constructor by default
    EduConfigDataWrapper& operator=(EduConfigDataWrapper const&);
    EduConfigDataWrapper(EduConfigDataWrapper const&);
    EduConfigDataWrapper();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EduConfigDataWrapper();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EduConfigDataWrapper(::EDUConfigData const&, ::IMinecraftEventing*, ::edu::Role, std::string);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::EDUConfigData const&, ::IMinecraftEventing*, ::edu::Role, std::string);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
