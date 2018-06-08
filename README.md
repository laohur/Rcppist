### Rcppist  rcpp包开发案例  
 
  
# 安装Rcppist    
#下载安装Rtools  https://cran.r-project.org/bin/windows/Rtools/  
#Rstudio中运行  
system('where make')  #显示路径则安装正确  
#install.packages("Rcpp")  #若无则安装    
library("Rcpp")    
#install.packages("devtools")  #若无则安装      
library("devtools")      
install_github("laohur/Rcppist")    
  
  
# 使用Rcppist  zlise为例
X<-runif(100)*100  
X  
Y<-Rcppist::zlise(X)  
Y  
#Y即X的z分数  

# 函数库    

#以下传入数值向量,返回数值向量  
zlise  
tanh  
softmax  
l2lise  
relu  

#以下传入数值向量,返回排序坐标  
csort  

#以下传入两个数值向量,返回数值  
cosineSimilarity  