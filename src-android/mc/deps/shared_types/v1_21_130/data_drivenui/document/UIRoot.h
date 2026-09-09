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
    ::ll::TypedStorage<8, 24, ::SharedTypes::v1_21_130::DataDrivenUI::DocumentDescription> mDescription;
    ::ll::TypedStorage<8, 24, ::SharedTypes::v1_21_130::DataDrivenUI::AttribsRoot>         mAttribs;
    ::ll::TypedStorage<8, 24, ::SharedTypes::v1_21_130::DataDrivenUI::Layout>              mLayout;
    ::ll::TypedStorage<8, 40, std::unordered_set<std::string>>                             mExtensionPoints;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI UIRoot(::SharedTypes::v1_21_130::DataDrivenUI::UIRoot const&);

    MCNAPI ~UIRoot();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string_view const& UI_ROOT_PAYLOAD_KEY();

    MCNAPI static ::SemVersionConstant const& VERSION();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::v1_21_130::DataDrivenUI::UIRoot const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_130::DataDrivenUI
