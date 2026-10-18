#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/ServiceReference.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/ServiceRegistrationToken.h"
#include "mc/options/EducationFeature.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/resources/ResourcePackListener.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class LevelData;
class PackCapability;
#else // @header-generator platform
#endif // @header-generator platform
class ResourcePackManager;
// clang-format on

class EducationOptions : public ::Bedrock::EnableNonOwnerReferences, public ::ResourcePackListener {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::ResourcePackManager*> mPackMan;
    ::ll::TypedStorage<1, 1, ::EducationFeature>     mFeatureFlags;
    ::ll::UntypedStorage<8, 8>                       mServiceRegistrationToken;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnkecbd05;
    ::ll::UntypedStorage<1, 1> mUnke6a413;
    ::ll::UntypedStorage<8, 8> mUnk3e959f;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    EducationOptions& operator=(EducationOptions const&);
    EducationOptions(EducationOptions const&);
    EducationOptions();
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~EducationOptions();
#else // @header-generator platform
    virtual ~EducationOptions() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void onActiveResourcePacksChanged(::ResourcePackManager&);
#else // @header-generator platform
    virtual void onActiveResourcePacksChanged(::ResourcePackManager& manager) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit EducationOptions(::ResourcePackManager*);

    MCNAPI void init(::LevelData const&);
#else // @header-generator platform
    MCNAPI explicit EducationOptions(::ResourcePackManager* packMan);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::ServiceReference<EducationOptions> _getCurrentOptions();

    MCNAPI static ::PackCapability getPackCapability();
#else // @header-generator platform
    MCNAPI static ::ServiceReference<::EducationOptions> _getCurrentOptions();
#endif // @header-generator platform

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
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ResourcePackManager*);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCNAPI void* $ctor(::ResourcePackManager* packMan);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $onActiveResourcePacksChanged(::ResourcePackManager&);
#else // @header-generator platform
    MCNAPI void $onActiveResourcePacksChanged(::ResourcePackManager& manager);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCNAPI static void** $vftableForResourcePackListener();

    MCNAPI static void** $vftableForEnableNonOwnerReferences();
#endif // @header-generator platform
    // NOLINTEND
};
