#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockType.h"
#include "mc/world/level/block/ElementCategory.h"
#include "mc/world/level/block/ElementType.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class Block;
class BlockPos;
class BlockSource;
class ItemInstance;
class ItemStackBase;
class RecipeIngredient;
struct ElementInfo;
namespace mce { class Color; }
// clang-format on

class ElementBlock : public ::BlockType {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::ElementType> mType;
    // NOLINTEND

public:
    // prevent constructor by default
    ElementBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ElementBlock();

    virtual bool canBeUsedInCommands(::BaseGameVersion const&) const;

    virtual std::string buildDescriptionId(::Block const&) const;

    virtual ::Block const* tryLegacyUpgrade(ushort) const;

    virtual ::mce::Color getMapColor(::BlockSource&, ::BlockPos const&, ::Block const&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ElementBlock(std::string const&, int, ::ElementType);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::ElementType getElement(::ItemStackBase const&);

    MCNAPI static ::ElementInfo getElementInfo(::ElementType);

    MCNAPI static ::RecipeIngredient getIngredientForElement(::ElementType, int);

    MCNAPI static ::ItemInstance getItemForElement(::ElementType, int);

    MCNAPI static void initElements();

    MCNAPI static bool isElement(::ItemStackBase const&);

    MCNAPI static void shutdownElements();

    MCNAPI static ::BlockType const* tryGetBlockTypeForElement(::ElementType);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::vector<const BlockType*>& mElements();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, int, ::ElementType);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $canBeUsedInCommands(::BaseGameVersion const&) const;

    MCNAPI std::string $buildDescriptionId(::Block const&) const;

    MCNAPI ::Block const* $tryLegacyUpgrade(ushort) const;

    MCNAPI ::mce::Color $getMapColor(::BlockSource&, ::BlockPos const&, ::Block const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
