#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class DataItem;
class EntityContext;
namespace SynchedActorDataSerializer { struct DeserializeArgs; }
namespace SynchedActorDataSerializer { struct DeserializeResult; }
// clang-format on

struct ISynchedActorDataAdapter {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~ISynchedActorDataAdapter();
#else // @header-generator platform
    virtual ~ISynchedActorDataAdapter() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<DataItem> serialize(::EntityContext const&) const = 0;
#else // @header-generator platform
    virtual ::std::unique_ptr<::DataItem> serialize(::EntityContext const& from) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::SynchedActorDataSerializer::DeserializeResult deserialize(::DataItem const&, ::SynchedActorDataSerializer::DeserializeArgs&) const = 0;
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual ::SynchedActorDataSerializer::DeserializeResult
    deserialize(::DataItem const& from, ::SynchedActorDataSerializer::DeserializeArgs& args) const = 0;
#endif // @header-generator platform
    // NOLINTEND
};
