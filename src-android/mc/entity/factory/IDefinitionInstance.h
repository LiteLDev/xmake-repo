#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class DataLoadHelper;
class EntityContext;
// clang-format on

class IDefinitionInstance {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mName;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void _initialize(::EntityContext&) const = 0;

    virtual ~IDefinitionInstance();

    virtual void _uninitialize(::EntityContext&) const = 0;

    virtual void _save(::EntityContext const&, ::CompoundTag&) const = 0;

    virtual void _load(::EntityContext&, ::CompoundTag const&, ::DataLoadHelper&) const = 0;

    virtual void _reload(::EntityContext&) const = 0;

    virtual ushort getDefinitionTypeId() const = 0;
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
