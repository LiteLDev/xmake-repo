#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/platform/UUID.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/resources/PackSettingValueAndDefault.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct PackSettingValueAndDefault;
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
#else // @header-generator platform
#endif // @header-generator platform
    ::ll::TypedStorage<8, 16, ::mce::UUID const> mPackId;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, std::weak_ptr<Bedrock::PubSub::Publisher<void (const mce::UUID&, const std::string&, const std::variant<float, bool, std::string>&), Bedrock::PubSub::ThreadModel::MultiThreaded, (Bedrock::PubSub::ReturnPolicyType)0>>> mOnChangePublisher;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, PackSettingValueAndDefault>> mNameValueMap;
    ::ll::TypedStorage<8, 8, ulong> mLastUsed;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        16,
        ::std::weak_ptr<::Bedrock::PubSub::Publisher<
            void(::mce::UUID const&, ::std::string const&, ::std::variant<float, bool, ::std::string> const&),
            ::Bedrock::PubSub::ThreadModel::MultiThreaded,
            0>>>
                                                                                                 mOnChangePublisher;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::PackSettingValueAndDefault>> mNameValueMap;
    ::ll::TypedStorage<8, 8, uint64>                                                             mLastUsed;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    PackSettings& operator=(PackSettings const&);
    PackSettings();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void applyDefinitions(
#if defined(LL_PLAT_A) // @header-generator platform
        std::vector<std::variant<
            SharedTypes::v3_0_0::PackManifestDefinition::LabelSetting,
            SharedTypes::v3_0_0::PackManifestDefinition::SliderSetting,
            SharedTypes::v3_0_0::PackManifestDefinition::ToggleSetting,
            SharedTypes::v3_0_0::PackManifestDefinition::DropdownSetting>> const&,
        std::map<std::string, std::variant<float, bool, std::string>> const*
#else // @header-generator platform
        ::std::vector<::std::variant<
            ::SharedTypes::v3_0_0::PackManifestDefinition::LabelSetting,
            ::SharedTypes::v3_0_0::PackManifestDefinition::SliderSetting,
            ::SharedTypes::v3_0_0::PackManifestDefinition::ToggleSetting,
            ::SharedTypes::v3_0_0::PackManifestDefinition::DropdownSetting>> const&  packSettingDef,
        ::std::map<::std::string, ::std::variant<float, bool, ::std::string>> const* userOverrides
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unordered_map<std::string, PackSettingValueAndDefault> const& getNameValueMap() const;

    MCNAPI void setValue(std::string const&, std::variant<float, bool, std::string> const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void setValue(::std::string const& name, ::std::variant<float, bool, ::std::string> const& value);
#endif
#endif // @header-generator platform
    // NOLINTEND
};
