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
    // clang-format off
    virtual ~ISynchedActorDataAdapter();

    virtual std::unique_ptr<DataItem> serialize(::EntityContext const&) const = 0;

    virtual ::SynchedActorDataSerializer::DeserializeResult deserialize(::DataItem const&, ::SynchedActorDataSerializer::DeserializeArgs&) const = 0;
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
