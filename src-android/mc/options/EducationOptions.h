#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/ServiceReference.h"
#include "mc/deps/core/utility/ServiceRegistrationToken.h"
#include "mc/options/EducationFeature.h"
#include "mc/resources/ResourcePackListener.h"

// auto generated forward declare list
// clang-format off
class LevelData;
class PackCapability;
class ResourcePackManager;
// clang-format on

class EducationOptions : public ::Bedrock::EnableNonOwnerReferences, public ::ResourcePackListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ResourcePackManager*> mPackMan;
    ::ll::TypedStorage<1, 1, ::EducationFeature>     mFeatureFlags;
    ::ll::UntypedStorage<8, 8>                       mServiceRegistrationToken;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EducationOptions();

    virtual void onActiveResourcePacksChanged(::ResourcePackManager&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit EducationOptions(::ResourcePackManager*);

    MCNAPI void init(::LevelData const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::ServiceReference<EducationOptions> _getCurrentOptions();

    MCNAPI static ::PackCapability getPackCapability();

    MCNAPI static bool isBaseCodeBuilderEnabled();

    MCNAPI static bool isChemistryEnabled();

    MCNAPI static bool isCodeBuilderEnabled();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::EducationOptions& DEFAULT_OPTION();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ResourcePackManager*);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onActiveResourcePacksChanged(::ResourcePackManager&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
