#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/IPackLoadScoped.h"
#include "mc/util/EventResponseFactory.h"

// auto generated forward declare list
// clang-format off
class SemVersion;
struct LegacyEventItemComponentData;
struct PackLoadInfo;
namespace SharedTypes::v1_26_30 { struct ItemDocument; }
// clang-format on

class ItemEventResponseFactory : public ::EventResponseFactory, public ::IPackLoadScoped {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    ItemEventResponseFactory();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ItemEventResponseFactory();
#else // @header-generator platform
    virtual ~ItemEventResponseFactory() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void initializeFactory(::PackLoadInfo const&);
#else // @header-generator platform
    virtual void initializeFactory(::PackLoadInfo const& packLoadInfo) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void initSchema();
#else // @header-generator platform
    virtual void initSchema() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit ItemEventResponseFactory(::PackLoadInfo const&);

    MCNAPI std::optional<LegacyEventItemComponentData>
           makeLegacyEvents(::SemVersion const&, ::SharedTypes::v1_26_30::ItemDocument const&) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::PackLoadInfo const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI ::std::optional<::LegacyEventItemComponentData> makeLegacyEvents(
        ::SemVersion const&                          documentVersion,
        ::SharedTypes::v1_26_30::ItemDocument const& itemDocument
    ) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $initializeFactory(::PackLoadInfo const&);
#else // @header-generator platform
    MCAPI void $initializeFactory(::PackLoadInfo const& packLoadInfo);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $initSchema();
#else // @header-generator platform
    MCAPI void $initSchema();


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCNAPI static void** $vftableForEventResponseFactory();

    MCNAPI static void** $vftableForIPackLoadScoped();
#endif // @header-generator platform
    // NOLINTEND
};
