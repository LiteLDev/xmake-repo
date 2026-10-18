#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_130/data_drivenui/document/AttribsComposition.h"
#include "mc/deps/shared_types/v1_21_130/data_drivenui/document/CompositionLayout.h"
#include "mc/deps/shared_types/v1_21_130/data_drivenui/document/DocumentDescription.h"

// auto generated forward declare list
// clang-format off
class SemVersionConstant;
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_130::DataDrivenUI {

struct UIComposition {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, ::SharedTypes::v1_21_130::DataDrivenUI::DocumentDescription> mDescription;
    ::ll::TypedStorage<8, 32, ::SharedTypes::v1_21_130::DataDrivenUI::AttribsComposition>  mAttribs;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::SharedTypes::v1_21_130::DataDrivenUI::DocumentDescription> mDescription;
    ::ll::TypedStorage<8, 40, ::SharedTypes::v1_21_130::DataDrivenUI::AttribsComposition>  mAttribs;
#endif // @header-generator platform
    ::ll::TypedStorage<8, 24, ::SharedTypes::v1_21_130::DataDrivenUI::CompositionLayout>   mLayout;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    // prevent constructor by default
    UIComposition();

public:
#endif // @header-generator platform
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI UIComposition(::SharedTypes::v1_21_130::DataDrivenUI::UIComposition const&);
#else // @header-generator platform
    MCAPI UIComposition(::SharedTypes::v1_21_130::DataDrivenUI::UIComposition const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SharedTypes::v1_21_130::DataDrivenUI::UIComposition&
    operator=(::SharedTypes::v1_21_130::DataDrivenUI::UIComposition&&);
#else // @header-generator platform
    MCAPI ::SharedTypes::v1_21_130::DataDrivenUI::UIComposition&
    operator=(::SharedTypes::v1_21_130::DataDrivenUI::UIComposition const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~UIComposition();
#else // @header-generator platform
    MCAPI ~UIComposition();
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
    MCNAPI static std::string_view const& UI_COMPOSITION_PAYLOAD_KEY();

    MCNAPI static ::SemVersionConstant const& VERSION();
#else // @header-generator platform
    MCAPI static ::SemVersionConstant const& VERSION();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::SharedTypes::v1_21_130::DataDrivenUI::UIComposition const&);
#else // @header-generator platform
    MCAPI void* $ctor(::SharedTypes::v1_21_130::DataDrivenUI::UIComposition const&);
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
