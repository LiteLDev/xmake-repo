#pragma once

#include "mc/_HeaderOutputPredefine.h"

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

namespace ClientBlockPipeline {

class SchematicsRepository : public ::Bedrock::EnableNonOwnerReferences {
public:
    // SchematicsRepository inner types define
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
};

} // namespace ClientBlockPipeline
