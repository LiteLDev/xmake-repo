#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
