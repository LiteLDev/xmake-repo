#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/BlockActor.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockType;
class IBlockSource;
class Vec3;
namespace LeanDynamicProperty { struct String; }
// clang-format on

class DataDrivenBlockActor : public ::BlockActor {
public:
    // prevent constructor by default
    DataDrivenBlockActor();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DataDrivenBlockActor();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DataDrivenBlockActor(::BlockType const&, ::BlockPos const&);

    MCNAPI std::function<void(
        const std::string&,
        uint,
        const std::string&,
        uint,
        const std::variant<double, float, bool, LeanDynamicProperty::String, Vec3>*
    )>
           getDynamicPropertiesCallback(::IBlockSource&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BlockType const&, ::BlockPos const&);
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
