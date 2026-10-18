#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/dynamic/DynamicValue.h"
#include "mc/deps/shared_types/v1_21_130/data_drivenui/common/ComponentNamed.h"
#include "mc/deps/shared_types/v1_21_130/data_drivenui/enums/ComponentType.h"

namespace SharedTypes::v1_21_130::DataDrivenUI {

struct ContainerTextField : public ::SharedTypes::v1_21_130::DataDrivenUI::ComponentNamed<
                                SharedTypes::v1_21_130::DataDrivenUI::ContainerTextField,
                                (SharedTypes::v1_21_130::DataDrivenUI::ComponentType)12,
                                SharedTypes::v1_21_130::DataDrivenUI::ContainerTextFieldName> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::cereal::DynamicValue> mAttribs;
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_130::DataDrivenUI
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
