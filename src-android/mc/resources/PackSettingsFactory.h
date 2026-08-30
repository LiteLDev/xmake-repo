#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ReflectionCtx.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/deps/shared_types/v1_21_100/pack_settings/Document.h"
#include "mc/platform/UUID.h"
#include "mc/platform/brstd/basic_cstring_view.h"

// auto generated forward declare list
// clang-format off
class PackManifest;
class PackSettings;
struct PackSettingValueAndDefault;
namespace Bedrock::PubSub { class Subscription; }
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace Core { class Path; }
namespace Core { class PathView; }
namespace Puv { template<typename T0, typename T1, typename T2, typename T3> class SlicedLoader; }
// clang-format on

class PackSettingsFactory {
public:
    // PackSettingsFactory inner types declare
    // clang-format off
    struct Stats;
    // clang-format on

    // PackSettingsFactory inner types define
    struct Stats {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, uint> mSaveAttempts;
        ::ll::TypedStorage<4, 4, uint> mLoadAttempts;
        ::ll::TypedStorage<4, 4, uint> mGlobalSaveAttempts;
        ::ll::TypedStorage<4, 4, uint> mGlobalLoadAttempts;
        // NOLINTEND
    };

    using PackIdToSettingsMap = std::unordered_map<mce::UUID, std::unique_ptr<PackSettings>>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, ulong const> mMaxGlobalPackSettingEntriesPerFile;
    ::ll::UntypedStorage<8, 24> mGlobalPackSettingsPath;
    ::ll::TypedStorage<4, 16, ::PackSettingsFactory::Stats> mStats;
    ::ll::UntypedStorage<8, 120> mReflectionCtx;
    ::ll::UntypedStorage<8, 240> mLoader;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Bedrock::PubSub::Publisher<void (const mce::UUID&, const std::string&, const std::variant<float, bool, std::string>&), Bedrock::PubSub::ThreadModel::MultiThreaded, (Bedrock::PubSub::ReturnPolicyType)0>>> mOnChangePublisher;
    ::ll::TypedStorage<8, 8, std::unique_ptr<std::unordered_map<mce::UUID, std::unique_ptr<PackSettings>>>> mGlobalPackSettings;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::unordered_map<mce::UUID, std::unique_ptr<PackSettings>>>> mWorldPackSettings;
    ::ll::TypedStorage<8, 8, std::unique_ptr<SharedTypes::v1_21_100::PackSettingsDefinition::Document>> mGlobalUserOverrides;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::unique_ptr<SharedTypes::v1_21_100::PackSettingsDefinition::Document>>> mPerWorldUserOverrides;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    PackSettingsFactory();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PackSettingsFactory();

    virtual ulong getAccessTimestamp() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::PackSettings* _getGlobalPackSettings(::PackManifest const&);

    MCNAPI ::PackSettings* _getWorldPackSettings(::PackManifest const&, std::optional<std::string>);

    MCNAPI std::unique_ptr<SharedTypes::v1_21_100::PackSettingsDefinition::Document>
           _loadUserOverridesFromFile(::Core::Path const&) const;

    MCNAPI bool
    _saveUserOverridesToFile(::SharedTypes::v1_21_100::PackSettingsDefinition::Document, ::Core::Path const&) const;

    MCNAPI void _syncPackSettingsToSaveDoc(
        ::mce::UUID,
        ::PackSettings const&,
        ::SharedTypes::v1_21_100::PackSettingsDefinition::Document&,
        bool
    ) const;

    MCNAPI ::PackSettings* getPackSettings(::PackManifest const&, std::optional<std::string>);

    MCNAPI bool loadPerWorldUserOverrides(std::string const&, ::Core::Path const&);

    MCNAPI ::Bedrock::PubSub::Subscription registerObserver(
        std::function<void(const mce::UUID&, const std::string&, const std::variant<float, bool, std::string>&)>
    );

    MCNAPI bool saveGlobalUserOverrides();

    MCNAPI bool savePerWorldUserOverrides(std::string const&, ::Core::Path const&);

    MCNAPI std::string
           serializePackSettingsNameValueMap(std::unordered_map<std::string, PackSettingValueAndDefault> const&) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::brstd::basic_cstring_view<char, std::char_traits<char>> const&
    GLOBAL_RESOURCE_PACK_SETTINGS_FILENAME();

    MCNAPI static ::brstd::basic_cstring_view<char, std::char_traits<char>> const&
    WORLD_BEHAVIOR_PACK_SETTINGS_FILENAME();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ulong $getAccessTimestamp() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
