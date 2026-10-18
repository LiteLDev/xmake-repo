#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/threading/UniqueLock.h"
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class Geometry;
class GeometryInfo;
class GeometryInheritanceTree;
class GeometryPtr;
class MinEngineVersion;
class ResourceLoadManager;
class ResourcePackManager;
class SemVersion;
class SemVersionConstant;
struct ModelParent;
struct TextureUVCoordinateSet;
namespace Json { class Value; }
namespace JsonUtil { class EmptyClass; }
// clang-format on

class GeometryGroup : public ::Bedrock::EnableNonOwnerReferences, public ::std::enable_shared_from_this<GeometryGroup> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, std::shared_ptr<GeometryInfo>>> mGeometries;
    ::ll::TypedStorage<4, 40, std::mutex>                                                      mGeometryLock;
    ::ll::TypedStorage<8, 8, long const>                                                       mResourceLoadTimeStamp;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~GeometryGroup();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI GeometryGroup();

    MCNAPI std::shared_ptr<GeometryInfo>
           _findOrAddGeometryInfo(::HashedString const&, ::Bedrock::Threading::UniqueLock<std::mutex>&);

    MCNAPI void _loadModelsAsync(
        ::gsl::not_null<Bedrock::NonOwnerPointer<ResourceLoadManager>>,
        std::shared_ptr<GeometryInheritanceTree>,
        std::function<void(std::weak_ptr<GeometryGroup>, const std::string&, const ModelParent&)>,
        std::function<void()>
    );

    MCNAPI void _loadModelsSync(
        ::GeometryInheritanceTree&,
        std::function<void(std::weak_ptr<GeometryGroup>, const std::string&, const ModelParent&)>
    );

    MCNAPI void addGeometries(
        ::gsl::not_null<Bedrock::NonOwnerPointer<ResourceLoadManager>>,
        ::Json::Value&,
        ::MinEngineVersion const&,
        std::function<void()>,
        bool
    );

    MCNAPI ::GeometryPtr getGeometry(::HashedString const&);

    MCNAPI std::shared_ptr<GeometryInfo> getGeometryInfo(::HashedString const&);

    MCNAPI std::weak_ptr<GeometryGroup> getWeakPtrToThis();

    MCNAPI void loadGeometriesAsync(
        ::ResourcePackManager&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<ResourceLoadManager>>,
        std::function<void(std::weak_ptr<GeometryGroup>, const std::string&, const ModelParent&)>,
        std::function<void(Json::Value&)>
    );

    MCNAPI void loadModelPackFromStringSync(std::string const&, std::string const&, ::MinEngineVersion const&);

    MCNAPI void removeGeometry(::HashedString const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, GeometryGroup>>
    _buildGeometryFileSchema_v1_21();

    MCNAPI static std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, GeometryGroup>>
    _buildGeometryFileSchema_v1_26_40();

    MCNAPI static void _buildInheritanceTree(
        std::string const&,
        std::string const&,
        std::string const&,
        ::MinEngineVersion const&,
        ::GeometryInheritanceTree&,
        bool const,
        bool const,
        std::function<void(Json::Value&)>
    );

    MCNAPI static void _buildInheritanceTree(
        std::string const&,
        std::string const&,
        ::Json::Value&,
        ::MinEngineVersion const&,
        ::GeometryInheritanceTree&,
        bool const,
        bool const,
        std::function<void(Json::Value&)>
    );

    MCNAPI static bool checkVersionlessName(std::string_view, std::string_view);

    MCNAPI static bool isValidGeometryIdentifier(::Json::Value const&);

    MCNAPI static bool isValidOptionalNamespaceGeometryIdentifier(::Json::Value const&);

    MCNAPI static void loadModel(std::weak_ptr<GeometryGroup>, std::string const&, ::ModelParent const&);

    MCNAPI static void loadModelExt(
        std::weak_ptr<GeometryGroup>,
        std::string const&,
        ::ModelParent const&,
        int,
        int,
        ::TextureUVCoordinateSet const&,
        bool
    );

    MCNAPI static void upgradeMirrorMemberToV1_12(::Json::Value&);

    MCNAPI static bool upgradeToV1_19_30(::Json::Value&, ::SemVersion const&, ::MinEngineVersion const&, bool&);

    MCNAPI static bool upgradeToV1_21(::Json::Value&, ::SemVersion const&, ::MinEngineVersion const&, bool&);

    MCNAPI static bool upgradeToV1_26_40(::Json::Value&, ::SemVersion const&, ::MinEngineVersion const&, bool&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::SemVersionConstant const& GEOMETRY_SCHEMA_V1_12();

    MCNAPI static ::SemVersionConstant const& GEOMETRY_SCHEMA_V1_14();

    MCNAPI static ::SemVersionConstant const& GEOMETRY_SCHEMA_V1_16();

    MCNAPI static ::SemVersionConstant const& GEOMETRY_SCHEMA_V1_19_30();

    MCNAPI static ::SemVersionConstant const& GEOMETRY_SCHEMA_V1_21();

    MCNAPI static ::SemVersionConstant const& GEOMETRY_SCHEMA_V1_26_40();

    MCNAPI static ::SemVersionConstant const& GEOMETRY_SCHEMA_V1_8();

    MCNAPI static std::string const& ITEM_DISPLAY_TRANSFORMS_ID();

    MCNAPI static std::string const& UV_ROTATION_DOC();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/threading/UniqueLock.h"
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class GeometryInfo;
class GeometryInheritanceTree;
class HashedString;
class MinEngineVersion;
class ResourceLoadManager;
class ResourcePackManager;
class SemVersion;
class SemVersionConstant;
struct ModelParent;
struct TextureUVCoordinateSet;
namespace Bedrock::Threading { class Mutex; }
namespace Json { class Value; }
namespace JsonUtil { class EmptyClass; }
// clang-format on

class GeometryGroup : public ::Bedrock::EnableNonOwnerReferences,
                      public ::std::enable_shared_from_this<::GeometryGroup> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk69fa9e;
    ::ll::UntypedStorage<8, 80> mUnk15a0e0;
    ::ll::UntypedStorage<8, 8>  mUnk89a968;
    // NOLINTEND

public:
    // prevent constructor by default
    GeometryGroup& operator=(GeometryGroup const&);
    GeometryGroup(GeometryGroup const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~GeometryGroup() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI GeometryGroup();

    MCAPI ::std::shared_ptr<::GeometryInfo> _findOrAddGeometryInfo(
        ::HashedString const&                                          name,
        ::Bedrock::Threading::UniqueLock<::Bedrock::Threading::Mutex>& geometryLock
    );

    MCAPI void _loadModelsAsync(
        ::Bedrock::NotNullNonOwnerPtr<::ResourceLoadManager> resourceLoadManager,
        ::std::shared_ptr<::GeometryInheritanceTree>         inheritance,
        ::std::function<void(::std::weak_ptr<::GeometryGroup>, ::std::string const&, ::ModelParent const&)>
                                loadModelFunction,
        ::std::function<void()> mainThreadCallback
    );

    MCAPI void addGeometries(
        ::Bedrock::NotNullNonOwnerPtr<::ResourceLoadManager> resourceLoadManager,
        ::Json::Value&                                       geometryData,
        ::MinEngineVersion const&                            minEngineVersion,
        ::std::function<void()>                              mainThreadCallback,
        bool                                                 isAsync
    );

    MCAPI void loadGeometriesAsync(
        ::ResourcePackManager&                               resourcePackManager,
        ::Bedrock::NotNullNonOwnerPtr<::ResourceLoadManager> resourceLoadManager,
        ::std::function<void(::std::weak_ptr<::GeometryGroup>, ::std::string const&, ::ModelParent const&)>
                                              loadModelFunction,
        ::std::function<void(::Json::Value&)> postLoadFixup
    );

    MCAPI void loadModelPackFromStringSync(
        ::std::string const&      packName,
        ::std::string const&      content,
        ::MinEngineVersion const& minEngineVersion
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::GeometryGroup>>
    _buildGeometryFileSchema_v1_21();

    MCAPI static ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::GeometryGroup>>
    _buildGeometryFileSchema_v1_26_40();

    MCAPI static void _buildInheritanceTree(
        ::std::string const&,
        ::std::string const&                  sourceFilePathWithExtension,
        ::Json::Value&                        value,
        ::MinEngineVersion const&             minEngineVersion,
        ::GeometryInheritanceTree&            inheritance,
        bool const                            isFromBaseGamePack,
        bool const                            requireMinecraftNamespace,
        ::std::function<void(::Json::Value&)> postLoadFixup
    );

    MCAPI static void _buildInheritanceTree(
        ::std::string const&                  fileName,
        ::std::string const&                  sourceFilePathWithExtension,
        ::std::string const&                  fileContent,
        ::MinEngineVersion const&             minEngineVersion,
        ::GeometryInheritanceTree&            inheritance,
        bool const                            isFromBaseGamePack,
        bool const                            requireMinecraftNamespace,
        ::std::function<void(::Json::Value&)> postLoadFixup
    );

    MCAPI static bool checkVersionlessName(::std::string_view name, ::std::string_view versionlessGeoName);

    MCAPI static bool isValidGeometryIdentifier(::Json::Value const& name);

    MCAPI static bool isValidOptionalNamespaceGeometryIdentifier(::Json::Value const& name);

    MCAPI static void loadModel(
        ::std::weak_ptr<::GeometryGroup> weakGeometryGroup,
        ::std::string const&             pascalCaseName,
        ::ModelParent const&             mp
    );

    MCAPI static void loadModelExt(
        ::std::weak_ptr<::GeometryGroup> weakGeometryGroup,
        ::std::string const&             pascalCaseName,
        ::ModelParent const&             mp,
        int                              texw,
        int                              texh,
        ::TextureUVCoordinateSet const&  uvOffset,
        bool                             clearSkinAdjustmentsBitmask
    );

    MCAPI static void upgradeMirrorMemberToV1_12(::Json::Value& bone);

    MCAPI static bool upgradeToV1_19_30(
        ::Json::Value&            root,
        ::SemVersion const&       fileVersion,
        ::MinEngineVersion const& minEngineVersion,
        bool&                     hasBeenValidated
    );

    MCAPI static bool upgradeToV1_21(
        ::Json::Value&            root,
        ::SemVersion const&       fileVersion,
        ::MinEngineVersion const& minEngineVersion,
        bool&                     hasBeenValidated
    );

    MCAPI static bool upgradeToV1_26_40(
        ::Json::Value&            root,
        ::SemVersion const&       fileVersion,
        ::MinEngineVersion const& minEngineVersion,
        bool&                     hasBeenValidated
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::SemVersionConstant const& GEOMETRY_SCHEMA_V1_12();

    MCAPI static ::SemVersionConstant const& GEOMETRY_SCHEMA_V1_14();

    MCAPI static ::SemVersionConstant const& GEOMETRY_SCHEMA_V1_16();

    MCAPI static ::SemVersionConstant const& GEOMETRY_SCHEMA_V1_19_30();

    MCAPI static ::SemVersionConstant const& GEOMETRY_SCHEMA_V1_21();

    MCAPI static ::SemVersionConstant const& GEOMETRY_SCHEMA_V1_26_40();

    MCAPI static ::SemVersionConstant const& GEOMETRY_SCHEMA_V1_8();

    MCAPI static ::std::string const& ITEM_DISPLAY_TRANSFORMS_ID();

    MCAPI static ::std::string const& UV_ROTATION_DOC();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class GeometryGroup {};
#endif // @header-generator platform
#endif // @header-generator platform
