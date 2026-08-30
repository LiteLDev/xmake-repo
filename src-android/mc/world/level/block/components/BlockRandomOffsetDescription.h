#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/shared_types/FloatRange.h"
#include "mc/world/level/block/components/NetworkedBlockComponentDescription.h"

// auto generated forward declare list
// clang-format off
class BlockComponentStorage;
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct BlockRandomOffsetDescription : public ::NetworkedBlockComponentDescription<BlockRandomOffsetDescription> {
public:
    // BlockRandomOffsetDescription inner types declare
    // clang-format off
    struct RangeAndSteps;
    // clang-format on

    // BlockRandomOffsetDescription inner types define
    struct RangeAndSteps {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 8, ::SharedTypes::FloatRange> mRange;
        ::ll::TypedStorage<4, 4, uint>                      mSteps;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockRandomOffsetDescription::RangeAndSteps> mRangeX;
    ::ll::TypedStorage<4, 12, ::BlockRandomOffsetDescription::RangeAndSteps> mRangeY;
    ::ll::TypedStorage<4, 12, ::BlockRandomOffsetDescription::RangeAndSteps> mRangeZ;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BlockRandomOffsetDescription();

    virtual std::string const& getName() const;

    virtual void initializeComponent(::BlockComponentStorage&) const;

    virtual void initializeComponentFromCode(::BlockComponentStorage&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string const& NameID();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::string const& $getName() const;

    MCNAPI void $initializeComponent(::BlockComponentStorage&) const;

    MCNAPI void $initializeComponentFromCode(::BlockComponentStorage&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
