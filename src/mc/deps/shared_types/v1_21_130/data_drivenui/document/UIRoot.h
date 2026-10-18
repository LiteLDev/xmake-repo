#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_130/data_drivenui/document/AttribsRoot.h"
#include "mc/deps/shared_types/v1_21_130/data_drivenui/document/DocumentDescription.h"
#include "mc/deps/shared_types/v1_21_130/data_drivenui/document/Layout.h"

// auto generated forward declare list
// clang-format off
class SemVersionConstant;
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_130::DataDrivenUI {

struct UIRoot {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, ::SharedTypes::v1_21_130::DataDrivenUI::DocumentDescription> mDescription;
    ::ll::TypedStorage<8, 24, ::SharedTypes::v1_21_130::DataDrivenUI::AttribsRoot>         mAttribs;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::SharedTypes::v1_21_130::DataDrivenUI::DocumentDescription> mDescription;
    ::ll::TypedStorage<8, 32, ::SharedTypes::v1_21_130::DataDrivenUI::AttribsRoot>         mAttribs;
#endif // @header-generator platform
    ::ll::TypedStorage<8, 24, ::SharedTypes::v1_21_130::DataDrivenUI::Layout>              mLayout;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, std::unordered_set<std::string>>                             mExtensionPoints;
#else // @header-generator platform
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::std::string>>                         mExtensionPoints;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    UIRoot();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI UIRoot(::SharedTypes::v1_21_130::DataDrivenUI::UIRoot const&);
#else // @header-generator platform
    MCAPI UIRoot(::SharedTypes::v1_21_130::DataDrivenUI::UIRoot const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~UIRoot();
#else // @header-generator platform
    MCAPI ::SharedTypes::v1_21_130::DataDrivenUI::UIRoot& operator=(::SharedTypes::v1_21_130::DataDrivenUI::UIRoot&&);

    MCAPI ::SharedTypes::v1_21_130::DataDrivenUI::UIRoot&
    operator=(::SharedTypes::v1_21_130::DataDrivenUI::UIRoot const&);

    MCAPI ~UIRoot();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
#else // @header-generator platform
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string_view const& UI_ROOT_PAYLOAD_KEY();

    MCNAPI static ::SemVersionConstant const& VERSION();
#else // @header-generator platform
    MCAPI static ::SemVersionConstant const& VERSION();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::SharedTypes::v1_21_130::DataDrivenUI::UIRoot const&);
#else // @header-generator platform
    MCAPI void* $ctor(::SharedTypes::v1_21_130::DataDrivenUI::UIRoot const&);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_130::DataDrivenUI
