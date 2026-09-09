#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/platform/UUID.h"
#include "mc/resources/PackSettingValueAndDefault.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace SharedTypes::v3_0_0::PackManifestDefinition { struct DropdownSetting; }
namespace SharedTypes::v3_0_0::PackManifestDefinition { struct LabelSetting; }
namespace SharedTypes::v3_0_0::PackManifestDefinition { struct SliderSetting; }
namespace SharedTypes::v3_0_0::PackManifestDefinition { struct ToggleSetting; }
// clang-format on

class PackSettings {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 16, ::mce::UUID const> mPackId;
    ::ll::TypedStorage<8, 16, std::weak_ptr<Bedrock::PubSub::Publisher<void (const mce::UUID&, const std::string&, const std::variant<float, bool, std::string>&), Bedrock::PubSub::ThreadModel::MultiThreaded, (Bedrock::PubSub::ReturnPolicyType)0>>> mOnChangePublisher;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, PackSettingValueAndDefault>> mNameValueMap;
    ::ll::TypedStorage<8, 8, ulong> mLastUsed;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    PackSettings& operator=(PackSettings const&);
    PackSettings();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void applyDefinitions(
        std::vector<std::variant<
            SharedTypes::v3_0_0::PackManifestDefinition::LabelSetting,
            SharedTypes::v3_0_0::PackManifestDefinition::SliderSetting,
            SharedTypes::v3_0_0::PackManifestDefinition::ToggleSetting,
            SharedTypes::v3_0_0::PackManifestDefinition::DropdownSetting>> const&,
        std::map<std::string, std::variant<float, bool, std::string>> const*
    );

    MCNAPI std::unordered_map<std::string, PackSettingValueAndDefault> const& getNameValueMap() const;

    MCNAPI void setValue(std::string const&, std::variant<float, bool, std::string> const&);
    // NOLINTEND
};
