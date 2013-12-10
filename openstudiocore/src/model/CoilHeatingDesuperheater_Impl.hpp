/**********************************************************************
 *  Copyright (c) 2008-2013, Alliance for Sustainable Energy.
 *  All rights reserved.
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Lesser General Public
 *  License as published by the Free Software Foundation; either
 *  version 2.1 of the License, or (at your option) any later version.
 *
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public
 *  License along with this library; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 **********************************************************************/

#ifndef MODEL_COILHEATINGDESUPERHEATER_IMPL_HPP
#define MODEL_COILHEATINGDESUPERHEATER_IMPL_HPP

#include <model/ModelAPI.hpp>
#include <model/StraightComponent_Impl.hpp>

namespace openstudio {
namespace model {

// TODO: Check the following class names against object getters and setters.
class Schedule;
class Connection;
class ModelObject;

namespace detail {

  /** CoilHeatingDesuperheater_Impl is a StraightComponent_Impl that is the implementation class for CoilHeatingDesuperheater.*/
  class MODEL_API CoilHeatingDesuperheater_Impl : public StraightComponent_Impl {
   public:
    /** @name Constructors and Destructors */
    //@{

    CoilHeatingDesuperheater_Impl(const IdfObject& idfObject,
                                  Model_Impl* model,
                                  bool keepHandle);

    CoilHeatingDesuperheater_Impl(const openstudio::detail::WorkspaceObject_Impl& other,
                                  Model_Impl* model,
                                  bool keepHandle);

    CoilHeatingDesuperheater_Impl(const CoilHeatingDesuperheater_Impl& other,
                                  Model_Impl* model,
                                  bool keepHandle);

    virtual ~CoilHeatingDesuperheater_Impl() {}

    //@}
    /** @name Virtual Methods */
    //@{

    virtual unsigned inletPort();

    virtual unsigned outletPort();

    virtual const std::vector<std::string>& outputVariableNames() const;

    virtual IddObjectType iddObjectType() const;

    virtual ModelObject clone(Model model) const;

//  allowableChildTypes and children

    virtual std::vector<ScheduleTypeKey> getScheduleTypeKeys(const Schedule& schedule) const;

    //@}
    /** @name Getters */
    //@{

    // TODO: Check return type. From object lists, some candidates are: Schedule.
    boost::optional<Schedule> availabilitySchedule() const;

    double heatReclaimRecoveryEfficiency() const;

    bool isHeatReclaimRecoveryEfficiencyDefaulted() const;

    boost::optional<ModelObject> heatingSource() const;

    double parasiticElectricLoad() const;

    bool isParasiticElectricLoadDefaulted() const;

    //@}
    /** @name Setters */
    //@{

    // TODO: Check argument type. From object lists, some candidates are: Schedule.
    bool setAvailabilitySchedule(Schedule& schedule);

    void resetAvailabilitySchedule();

    bool setHeatReclaimRecoveryEfficiency(double heatReclaimRecoveryEfficiency);

    void resetHeatReclaimRecoveryEfficiency();

    bool setHeatingSource(const boost::optional<ModelObject>& modelObject);

    void resetHeatingSource();

    bool setParasiticElectricLoad(double parasiticElectricLoad);

    void resetParasiticElectricLoad();

    //@}
    /** @name Other */
    //@{

    //@}
   protected:
   private:
    REGISTER_LOGGER("openstudio.model.CoilHeatingDesuperheater");

    // TODO: Check the return types of these methods.
    // Optional getters for use by methods like children() so can remove() if the constructor fails.
    // There are other ways for the public versions of these getters to fail--perhaps all required
    // objects should be returned as boost::optionals
//    boost::optional<Connection> optionalAirInletNode() const;
//    boost::optional<Connection> optionalAirOutletNode() const;
//    boost::optional<DesuperHeatingCoilSources> optionalHeatingSource() const;
//    boost::optional<ModelObject> optionalHeatingSource() const;
  };

} // detail

} // model
} // openstudio

#endif // MODEL_COILHEATINGDESUPERHEATER_IMPL_HPP

