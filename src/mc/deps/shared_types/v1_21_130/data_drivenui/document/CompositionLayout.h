#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_21_130::DataDrivenUI { struct ContainerFixedGridLayout; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct ContainerTextField; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct ContextList; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct ExtensionPoint; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct FormButton; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct FormDivider; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct FormDropdown; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct FormImage; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct FormScrollView; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct FormSlider; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct FormSwitch; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct FormTextField; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct PanelCloseButton; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct PanelDecoration; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct PanelSpacing; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct PanelText; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct ScrollableGridLayout; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct Visibility; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_130::DataDrivenUI {

struct CompositionLayout {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24> mMarkup;
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        24,
        ::std::vector<::std::variant<
            ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::ContainerFixedGridLayout>,
            ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::ContainerTextField>,
            ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::ExtensionPoint>,
            ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::FormButton>,
            ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::FormDivider>,
            ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::FormDropdown>,
            ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::FormImage>,
            ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::FormScrollView>,
            ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::FormSlider>,
            ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::FormSwitch>,
            ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::FormTextField>,
            ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::PanelCloseButton>,
            ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::PanelDecoration>,
            ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::PanelSpacing>,
            ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::ContextList>,
            ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::ScrollableGridLayout>,
            ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::PanelText>,
            ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::Visibility>>>>
        mMarkup;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    CompositionLayout();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string_view const& NAME();
#else // @header-generator platform
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_130::DataDrivenUI
