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
    // prevent constructor by default
    ItemEventResponseFactory();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ItemEventResponseFactory();

    virtual void initializeFactory(::PackLoadInfo const&);

    virtual void initSchema();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $initializeFactory(::PackLoadInfo const&);

    MCNAPI void $initSchema();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
