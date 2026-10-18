#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/IItemHandleFactory.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class ItemRegistryRef;
class TickingTextures;
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/IItemHandleFactory.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class ItemRegistryRef;
class PropertyBag;
class TickingTextures;
namespace GeometryAtlas { class IItemHandle; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace GeometryAtlas {

#if defined(LL_PLAT_A) // @header-generator platform
class ItemHandleFactoryImpl : public ::OreUI::IItemHandleFactory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mGetItemRegistry;
    ::ll::UntypedStorage<8, 64> mGetTickingTextures;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class ItemHandleFactoryImpl : public ::OreUI::IItemHandleFactory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::brstd::move_only_function<::ItemRegistryRef() const>>        mGetItemRegistry;
    ::ll::TypedStorage<8, 64, ::brstd::move_only_function<::TickingTextures const*() const>> mGetTickingTextures;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::shared_ptr<::GeometryAtlas::IItemHandle>
    createItem(::std::string_view name, ::std::unique_ptr<::PropertyBag> bag) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::shared_ptr<::GeometryAtlas::IItemHandle>
    $createItem(::std::string_view name, ::std::unique_ptr<::PropertyBag> bag) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class ItemHandleFactoryImpl {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace GeometryAtlas
