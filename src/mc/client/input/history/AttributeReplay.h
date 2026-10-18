#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
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

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace History {

#if defined(LL_PLAT_A) // @header-generator platform
class AttributeReplay : public ::IMovementCorrection {
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class AttributeReplay : public ::IMovementCorrection {
#else // @header-generator platform
class AttributeReplay {
#endif // @header-generator platform
#endif // @header-generator platform
public:
    // AttributeReplay inner types declare
    // clang-format off
    struct MovementAttributeInfo;
    // clang-format on

    // AttributeReplay inner types define
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct MovementAttributeInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::std::optional<float> MovementAttributesComponent::*>
                                                                    mMovementAttributeComponentMemberPtr;
        ::ll::TypedStorage<1, 1, ::MovementAttributeAccess>         mAccess;
        ::ll::TypedStorage<1, 1, ::MovementAttributeCorrectionMode> mCorrectionMode;
        ::ll::TypedStorage<1, 1, bool>                              mSkipUpdate;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::UpdateAttributesPacket>> mPacket;
    ::ll::TypedStorage<4, 72, ::MovementAttributesComponent>               mMovementAttributes;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<uint64, ::History::AttributeReplay::MovementAttributeInfo>>
        mMovementAttributesInfo;
    // NOLINTEND

public:
    // prevent constructor by default
    AttributeReplay();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::AdvanceFrameResult
    getAdvanceFrameResult(::MovementDataExtractionUtility::SnapshotAccessor const& entity) /*override*/;

    virtual void advanceFrame(::EntityContext& entity) const /*override*/;

    virtual void advanceLiveFrame(::Actor& actor, ::std::optional<uint64>) /*override*/;

    virtual ::std::bitset<2> getCorrectionTypeBitset() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit AttributeReplay(::std::shared_ptr<::UpdateAttributesPacket> packet);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::UpdateAttributesPacket> packet);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::AdvanceFrameResult $getAdvanceFrameResult(::MovementDataExtractionUtility::SnapshotAccessor const& entity);

    MCAPI void $advanceFrame(::EntityContext& entity) const;

    MCAPI void $advanceLiveFrame(::Actor& actor, ::std::optional<uint64>);

    MCAPI ::std::bitset<2> $getCorrectionTypeBitset() const;
    // NOLINTEND
#else // @header-generator platform
    struct MovementAttributeInfo {};
#endif // @header-generator platform
#endif // @header-generator platform
};

} // namespace History
