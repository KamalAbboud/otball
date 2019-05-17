//                                               -*- C++ -*-
/**
 *  @brief OTBallImplementation
 *
 *  Copyright 2005-2019 Airbus-EDF-IMACS-ONERA-Phimeca
 *
 *  This library is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU Lesser General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public License
 *  along with this library.  If not, see <http://www.gnu.org/licenses/>.
 *
 */
#ifndef OTTEMPLATE_OTBALLIMPLEMENTATION_HXX
#define OTTEMPLATE_OTBALLIMPLEMENTATION_HXX

#include <openturns/PersistentObject.hxx>
#include <openturns/StorageManager.hxx>
#include <openturns/Point.hxx>
#include "ottemplate/ottemplateprivate.hxx"

namespace OTTEMPLATE
{

/**
 * @class OTBallImplementation
 *
 * OTBallImplementation is some otball type to illustrate how to add some classes in OpenTURNS
 */
class OTTEMPLATE_API OTBallImplementation
  : public OT::PersistentObject
{
  CLASSNAME;

public:
  /** Default constructor */
  OTBallImplementation();

  /** Virtual constructor method */
  OTBallImplementation * clone() const;

  /** example of a func that return a point squared. **/
  OT::Point square(OT::Point& p) const;

  /** String converter */
  OT::String __repr__() const;

  /** Method save() stores the object through the StorageManager */
  virtual void save(OT::Advocate & adv) const;

  /** Method load() reloads the object from the StorageManager */
  virtual void load(OT::Advocate & adv);

private:

}; /* class OTBallImplementation */

} /* namespace OTTEMPLATE */

#endif /* OTTEMPLATE_OTBALLIMPLEMENTATION_HXX */
