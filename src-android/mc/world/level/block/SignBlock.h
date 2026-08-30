#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/level/block/actor/SignTextSide.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class Block;
class BlockActor;
class BlockPos;
class BlockSource;
class GetCollisionShapeInterface;
class IConstBlockSource;
class Item;
class ItemInstance;
class ItemStack;
class Player;
class SignBlockActor;
namespace BlockEvents { class BlockPlayerInteractEvent; }
namespace BlockEvents { class BlockQueuedTickEvent; }
namespace mce { class Color; }
// clang-format on

class SignBlock : public ::ActorBlock {
public:
    // SignBlock inner types declare
    // clang-format off
    struct SignInteractionResult;
    // clang-format on

    // SignBlock inner types define
    enum class SignType : int {
        Oak                 = 0,
        Spruce              = 1,
        Birch               = 2,
        Jungle              = 3,
        Acacia              = 4,
        DarkOak             = 5,
        RedBigNetherShroom  = 6,
        BlueBigNetherShroom = 7,
        Mangrove            = 8,
        Bamboo              = 9,
        Cherry              = 10,
        PaleOak             = 11,
        Poplar              = 12,
    };

    struct SignInteractionResult {
    public:
        // SignInteractionResult inner types define
        enum class Result : int {
            NoInteraction  = 0,
            FailWaxedSign  = 1,
            UseDye         = 2,
            UseGlowInkSac  = 3,
            UseInkSac      = 4,
            UseHoneyComb   = 5,
            OpenForEditing = 6,
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::SignBlock::SignInteractionResult::Result> mResult;
        // NOLINTEND

    public:
        // prevent constructor by default
        SignInteractionResult();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI std::optional<std::string> getButtonTooltip() const;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::SignBlock::SignType> mSignType;
    ::ll::TypedStorage<1, 1, bool>                  mOnGround;
    // NOLINTEND

public:
    // prevent constructor by default
    SignBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~SignBlock();

    virtual ::AABB getCollisionShape(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::optional_ref<const GetCollisionShapeInterface>) const;

    virtual ::AABB const& getVisualShape(::Block const&, ::AABB&) const;

    virtual bool checkIsPathable(::Actor&, ::BlockPos const&, ::BlockPos const&) const;

    virtual bool mayPlace(::BlockSource&, ::BlockPos const&, uchar) const;

    virtual void neighborChanged(::BlockSource&, ::BlockPos const&, ::BlockPos const&) const;

    virtual ::ItemInstance asItemInstance(::Block const&, ::BlockActor const*) const;

    virtual bool isInteractiveBlock() const;

    virtual bool canSurvive(::BlockSource&, ::BlockPos const&) const;

    virtual float getYRotationInDegrees(::Block const&) const;

    virtual bool _canSurvive(::BlockSource&, ::BlockPos const&, uchar) const;

    virtual ::ItemInstance _getItemInstance() const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SignBlock(std::string const&, int, bool, ::SignBlock::SignType);

    MCNAPI ::SignBlock::SignType getSignType() const;

    MCNAPI void tick(::BlockEvents::BlockQueuedTickEvent&) const;

    MCNAPI void use(::BlockEvents::BlockPlayerInteractEvent&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool _canUseDye(::SignBlockActor&, ::SignTextSide, ::mce::Color const&, ::Player&);

    MCNAPI static bool _canUseHoneyComb(::SignBlockActor&, ::Player&);

    MCNAPI static bool _canUseInkSac(::SignBlockActor&, ::SignTextSide, ::Player&);

    MCNAPI static ::SignBlock::SignInteractionResult
    _getInteractResult(::SignBlockActor&, ::SignTextSide, ::ItemStack&, ::Player&, ::BlockPos const&, uchar);

    MCNAPI static ::SignBlock::SignInteractionResult getInteractResult(::Player&, ::BlockPos const&, uchar);

    MCNAPI static ::mce::Color getSignTextColorFromDyeItem(::Item const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, int, bool, ::SignBlock::SignType);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::AABB $getCollisionShape(
        ::Block const&,
        ::IConstBlockSource const&,
        ::BlockPos const&,
        ::optional_ref<const GetCollisionShapeInterface>
    ) const;

    MCNAPI ::AABB const& $getVisualShape(::Block const&, ::AABB&) const;

    MCNAPI bool $checkIsPathable(::Actor&, ::BlockPos const&, ::BlockPos const&) const;

    MCNAPI bool $mayPlace(::BlockSource&, ::BlockPos const&, uchar) const;

    MCNAPI void $neighborChanged(::BlockSource&, ::BlockPos const&, ::BlockPos const&) const;

    MCNAPI ::ItemInstance $asItemInstance(::Block const&, ::BlockActor const*) const;

    MCNAPI bool $isInteractiveBlock() const;

    MCNAPI bool $canSurvive(::BlockSource&, ::BlockPos const&) const;

    MCNAPI float $getYRotationInDegrees(::Block const&) const;

    MCNAPI bool $_canSurvive(::BlockSource&, ::BlockPos const&, uchar) const;

    MCNAPI ::ItemInstance $_getItemInstance() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
