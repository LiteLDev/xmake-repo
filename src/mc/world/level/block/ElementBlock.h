#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockType.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/block/ElementCategory.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/block/ElementType.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class Block;
class BlockPos;
class BlockSource;
#if defined(LL_PLAT_A) // @header-generator platform
class ItemInstance;
#else // @header-generator platform
#endif // @header-generator platform
class ItemStackBase;
#if defined(LL_PLAT_A) // @header-generator platform
class RecipeIngredient;
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    ElementBlock();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ElementBlock();
#else // @header-generator platform
    virtual ::mce::Color getMapColor(::BlockSource&, ::BlockPos const&, ::Block const& block) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canBeUsedInCommands(::BaseGameVersion const&) const;
#else // @header-generator platform
    virtual ::std::string buildDescriptionId(::Block const& block) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string buildDescriptionId(::Block const&) const;
#else // @header-generator platform
    virtual bool canBeUsedInCommands(::BaseGameVersion const& requiredBaseGameVersion) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Block const* tryLegacyUpgrade(ushort) const;

    virtual ::mce::Color getMapColor(::BlockSource&, ::BlockPos const&, ::Block const&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ElementBlock(std::string const&, int, ::ElementType);
#else // @header-generator platform
    virtual ::Block const* tryLegacyUpgrade(ushort extraData) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::ElementType getElement(::ItemStackBase const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static ::ElementType getElement(::ItemStackBase const& item);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::ElementInfo getElementInfo(::ElementType);
#else // @header-generator platform
    MCAPI static ::ElementInfo getElementInfo(::ElementType e);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::RecipeIngredient getIngredientForElement(::ElementType, int);

    MCNAPI static ::ItemInstance getItemForElement(::ElementType, int);

    MCNAPI static void initElements();

    MCNAPI static bool isElement(::ItemStackBase const&);

    MCNAPI static void shutdownElements();

    MCNAPI static ::BlockType const* tryGetBlockTypeForElement(::ElementType);
#else // @header-generator platform
    MCAPI static void initElements();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI static ::std::vector<::BlockType const*>& mElements();
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canBeUsedInCommands(::BaseGameVersion const&) const;
#else // @header-generator platform
    MCAPI ::mce::Color $getMapColor(::BlockSource&, ::BlockPos const&, ::Block const& block) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string $buildDescriptionId(::Block const&) const;
#else // @header-generator platform
    MCAPI ::std::string $buildDescriptionId(::Block const& block) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Block const* $tryLegacyUpgrade(ushort) const;
#else // @header-generator platform
    MCFOLD bool $canBeUsedInCommands(::BaseGameVersion const& requiredBaseGameVersion) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::mce::Color $getMapColor(::BlockSource&, ::BlockPos const&, ::Block const&) const;
#else // @header-generator platform
    MCAPI ::Block const* $tryLegacyUpgrade(ushort extraData) const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCAPI static void** $vftable();
#endif // @header-generator platform
    // NOLINTEND
};
