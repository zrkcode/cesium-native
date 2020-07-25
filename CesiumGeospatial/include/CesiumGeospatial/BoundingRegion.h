#pragma once

#include "CesiumGeospatial/Library.h"
#include "CesiumGeometry/CullingResult.h"
#include "CesiumGeometry/OrientedBoundingBox.h"
#include "CesiumGeospatial/Rectangle.h"
#include "CesiumGeospatial/Ellipsoid.h"

namespace CesiumGeometry {
    class Plane;
}

namespace CesiumGeospatial {
    class Cartographic;

    class CESIUMGEOSPATIAL_API BoundingRegion {
    public:
        BoundingRegion(
            double west,
            double south,
            double east,
            double north,
            double minimumHeight,
            double maximumHeight,
            const Ellipsoid& ellipsoid = Ellipsoid::WGS84
        );

        BoundingRegion(
            const Rectangle& rectangle,
            double minimumHeight,
            double maximumHeight,
            const Ellipsoid& ellipsoid = Ellipsoid::WGS84
        );

        const Rectangle& getRectangle() const { return this->_rectangle; }
        double getWest() const { return this->_rectangle.getWest(); }
        double getSouth() const { return this->_rectangle.getSouth(); }
        double getEast() const { return this->_rectangle.getEast(); }
        double getNorth() const { return this->_rectangle.getNorth(); }
        double getMinimumHeight() const { return this->_minimumHeight; }
        double getMaximumHeight() const { return this->_maximumHeight; }
        const CesiumGeometry::OrientedBoundingBox& getBoundingBox() const { return this->_boundingBox; }

        CesiumGeometry::CullingResult intersectPlane(const CesiumGeometry::Plane& plane) const;
        double computeDistanceSquaredToPosition(const glm::dvec3& position, const Ellipsoid& ellipsoid = Ellipsoid::WGS84) const;
        double computeDistanceSquaredToPosition(const Cartographic& position, const Ellipsoid& ellipsoid = Ellipsoid::WGS84) const;
        double computeDistanceSquaredToPosition(const Cartographic& cartographicPosition, const glm::dvec3& cartesianPosition) const;

private:
        static CesiumGeometry::OrientedBoundingBox _computeBoundingBox(
            const Rectangle& rectangle,
            double minimumHeight,
            double maximumHeight,
            const Ellipsoid& ellipsoid);

        Rectangle _rectangle;
        double _minimumHeight;
        double _maximumHeight;
        CesiumGeometry::OrientedBoundingBox _boundingBox;
        glm::dvec3 _southwestCornerCartesian;
        glm::dvec3 _northeastCornerCartesian;
        glm::dvec3 _westNormal;
        glm::dvec3 _eastNormal;
        glm::dvec3 _southNormal;
        glm::dvec3 _northNormal;
    };

}