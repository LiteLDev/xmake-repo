#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/vanilla_components/MovementAttributesComponent.h"
#include "mc/entity/components/MovementAttributeAccess.h"
#include "mc/entity/components/MovementAttributeCorrectionMode.h"
#include "mc/entity/utilities/AdvanceFrameResult.h"
#include "mc/entity/utilities/IMovementCorrection.h"

// auto generated forward declare list
// clang-format off
class Actor;
class EntityContext;
class UpdateAttributesPacket;
namespace MovementDataExtractionUtility { class SnapshotAccessor; }
// clang-format on

namespace History {

class AttributeReplay : public ::IMovementCorrection {
public:
    // AttributeReplay inner types declare
    // clang-format off
    struct MovementAttributeInfo;
    // clang-format on

    // AttributeReplay inner types define
    struct MovementAttributeInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, std::optional<float> MovementAttributesComponent::*>
                                                                    mMovementAttributeComponentMemberPtr;
        ::ll::TypedStorage<1, 1, ::MovementAttributeAccess>         mAccess;
        ::ll::TypedStorage<1, 1, ::MovementAttributeCorrectionMode> mCorrectionMode;
        ::ll::TypedStorage<1, 1, bool>                              mSkipUpdate;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 16, std::shared_ptr<UpdateAttributesPacket>> mPacket;
    ::ll::TypedStorage<4, 72, ::MovementAttributesComponent> mMovementAttributes;
    ::ll::TypedStorage<8, 40, std::unordered_map<ulong, History::AttributeReplay::MovementAttributeInfo>> mMovementAttributesInfo;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    AttributeReplay();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AttributeReplay();

    virtual ::AdvanceFrameResult getAdvanceFrameResult(::MovementDataExtractionUtility::SnapshotAccessor const&);

    virtual void advanceLiveFrame(::Actor&, std::optional<ulong>);

    virtual std::bitset<2> getCorrectionTypeBitset() const;

    virtual void advanceFrame(::EntityContext&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit AttributeReplay(std::shared_ptr<UpdateAttributesPacket>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<UpdateAttributesPacket>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::AdvanceFrameResult $getAdvanceFrameResult(::MovementDataExtractionUtility::SnapshotAccessor const&);

    MCNAPI void $advanceLiveFrame(::Actor&, std::optional<ulong>);

    MCNAPI std::bitset<2> $getCorrectionTypeBitset() const;

    MCNAPI void $advanceFrame(::EntityContext&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace History
