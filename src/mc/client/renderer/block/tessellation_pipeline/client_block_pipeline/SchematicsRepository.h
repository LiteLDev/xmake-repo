#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Block;
class BlockCullingGroup;
class BlockTransformationComponent;
class Experiments;
class GeometryGroup;
class GeometryPtr;
class Matrix;
struct BlockCullingData;
struct BlockGeometryComponent;
namespace ClientBlockPipeline { class MaterialRepository; }
namespace ClientBlockPipeline { struct BlockSchematic; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockCullingGroup;
class BlockTransformationComponent;
class Experiments;
class GeometryGroup;
class GeometryPtr;
class Matrix;
struct BlockCullingData;
struct BlockGeometryComponent;
namespace ClientBlockPipeline { class MaterialRepository; }
namespace ClientBlockPipeline { struct BlockSchematic; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace ClientBlockPipeline {

#if defined(LL_PLAT_A) // @header-generator platform
class SchematicsRepository : public ::Bedrock::EnableNonOwnerReferences {
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class SchematicsRepository : public ::Bedrock::EnableNonOwnerReferences {
#else // @header-generator platform
class SchematicsRepository {
#endif // @header-generator platform
#endif // @header-generator platform
public:
    // SchematicsRepository inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum Validation : uint {
        SILENT    = 0,
        WARNING   = 1,
        ERROR_OUT = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, std::unordered_map<HashedString, std::unordered_map<Vec3, std::shared_ptr<ClientBlockPipeline::BlockSchematic>>>>> mSchematicNameMap;
    ::ll::TypedStorage<8, 16, std::shared_ptr<ClientBlockPipeline::MaterialRepository>> mMaterialRepository;
    ::ll::TypedStorage<4, 4, ::ClientBlockPipeline::SchematicsRepository::Validation> mValidation;
    ::ll::TypedStorage<4, 4, uint> mValdiationErrorCount;
    ::ll::TypedStorage<8, 1024, std::array<std::shared_ptr<ClientBlockPipeline::BlockSchematic>, 64>> mUVlockedUnitCubes;
    ::ll::TypedStorage<8, 1024, std::array<std::shared_ptr<ClientBlockPipeline::BlockSchematic>, 64>> mUVlockedUnitCubesV1;
    // clang-format on
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SchematicsRepository();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SchematicsRepository();

    MCNAPI std::shared_ptr<ClientBlockPipeline::BlockSchematic>
           _createUnitCube(::Matrix const&, uchar, uchar, uchar, bool);

    MCNAPI bool
    _hasAllPartsWithinBufferLimit(::Vec3 const&, ::Vec3 const&, ::HashedString const&, std::vector<std::string>&) const;

    MCNAPI std::shared_ptr<ClientBlockPipeline::BlockSchematic> _loadSchematic(
        ::GeometryPtr const,
        ::BlockCullingData const*,
        ::HashedString const&,
        ::BlockTransformationComponent const*,
        ::Matrix const&,
        ::Matrix const&,
        std::variant<bool, std::set<HashedString>> const&,
        ::Experiments const*
    );

    MCNAPI std::shared_ptr<ClientBlockPipeline::MaterialRepository> getMaterialRepo() const;

    MCNAPI void initialize();

    MCNAPI void initializeBlockGeometryComponent(
        ::BlockGeometryComponent&,
        ::BlockTransformationComponent const*,
        ::GeometryGroup&,
        ::BlockCullingGroup&,
        ::Experiments const*
    );

    MCNAPI void setValidation(::ClientBlockPipeline::SchematicsRepository::Validation);

    MCNAPI bool validateTransformedBounds(::Block const&) const;
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    enum class Validation : int {
        Silent   = 0,
        Warning  = 1,
        ErrorOut = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<
            ::HashedString,
            ::std::unordered_map<
                ::HashedString,
                ::std::unordered_map<
                    ::Vec3,
                    ::std::shared_ptr<::ClientBlockPipeline::BlockSchematic>,
                    ::std::hash<::Vec3>,
                    ::std::equal_to<::Vec3>>>>>
                                                                                            mSchematicNameMap;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ClientBlockPipeline::MaterialRepository>> mMaterialRepository;
    ::ll::TypedStorage<4, 4, ::ClientBlockPipeline::SchematicsRepository::Validation>       mValidation;
    ::ll::TypedStorage<4, 4, uint>                                                          mValdiationErrorCount;
    ::ll::TypedStorage<8, 1024, ::std::array<::std::shared_ptr<::ClientBlockPipeline::BlockSchematic>, 64>>
        mUVlockedUnitCubes;
    ::ll::TypedStorage<8, 1024, ::std::array<::std::shared_ptr<::ClientBlockPipeline::BlockSchematic>, 64>>
        mUVlockedUnitCubesV1;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SchematicsRepository();

    MCAPI ::std::shared_ptr<::ClientBlockPipeline::BlockSchematic>
    _createUnitCube(::Matrix const& postModelSpaceTransform, uchar rotX, uchar rotY, uchar rotZ, bool isV1);

    MCAPI ::std::shared_ptr<::ClientBlockPipeline::BlockSchematic> _loadSchematic(
        ::GeometryPtr const                                     geoPtr,
        ::BlockCullingData const*                               cullingDataPtr,
        ::HashedString const&                                   cullingLayer,
        ::BlockTransformationComponent const*                   transformComponent,
        ::Matrix const&                                         preModelSpaceTransform,
        ::Matrix const&                                         postModelSpaceTransform,
        ::std::variant<bool, ::std::set<::HashedString>> const& lockUVs,
        ::Experiments const*
    );

    MCAPI void initialize();

    MCAPI void initializeBlockGeometryComponent(
        ::BlockGeometryComponent&             blockGeometryComponent,
        ::BlockTransformationComponent const* blockTransformComponent,
        ::GeometryGroup&                      geometryGroup,
        ::BlockCullingGroup&                  cullingGroup,
        ::Experiments const*                  experiments
    );

    MCAPI bool validateTransformedBounds(::Block const& block) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool _hasAllPartsWithinBufferLimit(
        ::Vec3 const&                 schematicMin,
        ::Vec3 const&                 schematicMax,
        ::HashedString const&         schematicName,
        ::std::vector<::std::string>& errorMessages
    );
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
#else // @header-generator platform
    enum class Validation : int {};
#endif // @header-generator platform
#endif // @header-generator platform
};

} // namespace ClientBlockPipeline
