/**
 * @file   ShowerCalibrationGaloreFromPIDService.h
 * @brief  Shower energy calibration according to particle type
 * @author Gianluca Petrillo (petrillo@fnal.gov)
 * @date   April 28, 2016
 * @see    ShowerCalibrationGaloreFromPID.h
 * 
 * 
 */


#ifndef LAREXAMPLES_SERVICES_SHOWERCALIBRATIONGALORE_SERVICES_SHOWERCALIBRATIONGALOREFROMPIDSERVICE_H
#define LAREXAMPLES_SERVICES_SHOWERCALIBRATIONGALORE_SERVICES_SHOWERCALIBRATIONGALOREFROMPIDSERVICE_H 1


/// LArSoft libraries
#include "larexamples/Services/ShowerCalibrationGalore/Providers/ShowerCalibrationGaloreFromPID.h"
#include "larexamples/Services/ShowerCalibrationGalore/Services/ShowerCalibrationGaloreService.h"


namespace lar {
   namespace example {
      
      /**
       * @brief Service for shower energy calibration according to particle type
       * 
       * See the ShowerCalibrationGaloreFromPID provider documentation for
       * configuration instructions and implementation details.
       * 
       * See the ShowerCalibrationGalore provider class documentation for an
       * explanation of the interface.
       * 
       * Configuration parameters
       * -------------------------
       * 
       * In addition to the service provider:
       * 
       * * *service_provider* must be set to
       *   `"ShowerCalibrationGaloreFromPIDService"` in order to tell _art_ to
       *   load this implementation.
       * 
       */
      using ShowerCalibrationGaloreFromPIDService
        = lar::ServiceProviderImplementationWrapper
          <ShowerCalibrationGaloreFromPID, ShowerCalibrationGaloreService>;
         
   } // namespace example
} // namespace lar


DECLARE_ART_SERVICE_INTERFACE_IMPL(
  lar::example::ShowerCalibrationGaloreFromPIDService,
  lar::example::ShowerCalibrationGaloreService,
  LEGACY
  )


#endif // LAREXAMPLES_SERVICES_SHOWERCALIBRATIONGALORE_SERVICES_SHOWERCALIBRATIONGALOREFROMPIDSERVICE_H
