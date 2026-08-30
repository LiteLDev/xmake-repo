#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/dynamic/DynamicValue.h"
#include "mc/deps/shared_types/v1_21_130/data_drivenui/common/ComponentNamed.h"
#include "mc/deps/shared_types/v1_21_130/data_drivenui/enums/ComponentType.h"

namespace SharedTypes::v1_21_130::DataDrivenUI {

struct FormImage : public ::SharedTypes::v1_21_130::DataDrivenUI::ComponentNamed<
                       SharedTypes::v1_21_130::DataDrivenUI::FormImage,
                       (SharedTypes::v1_21_130::DataDrivenUI::ComponentType)16,
                       SharedTypes::v1_21_130::DataDrivenUI::FormImageName> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::cereal::DynamicValue> mAttribs;
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_130::DataDrivenUI
